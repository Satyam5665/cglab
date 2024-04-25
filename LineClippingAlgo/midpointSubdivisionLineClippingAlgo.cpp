#include <graphics.h>
#include <iostream>
using namespace std;

// Function to compute region code for a point (x, y) with respect to viewport dimensions
int computeCode(int x, int y, int X_MIN, int Y_MIN, int X_MAX, int Y_MAX)
{
    int code = 0;
    if (x < X_MIN)
        code |= 1; // LEFT
    else if (x > X_MAX)
        code |= 2; // RIGHT
    if (y < Y_MIN)
        code |= 4; // BOTTOM
    else if (y > Y_MAX)
        code |= 8; // TOP
    return code;
}

// Function to clip a line segment (x1, y1)-(x2, y2) against a viewport using Midpoint Subdivision algorithm
void midpointSubdivisionClip(int x1, int y1, int x2, int y2, int X_MIN, int Y_MIN, int X_MAX, int Y_MAX)
{
    // Compute region codes for the endpoints
    int code1 = computeCode(x1, y1, X_MIN, Y_MIN, X_MAX, Y_MAX);
    int code2 = computeCode(x2, y2, X_MIN, Y_MIN, X_MAX, Y_MAX);

    // OR operation on region codes
    int OR = code1 | code2;

    // If OR operation gives 0000, line is completely visible
    if (OR == 0)
    {
        setcolor(RED);
        line(x1, y1, x2, y2); // Draw the line segment
        return;
    }

    // Perform AND operation on region codes
    int AND = code1 & code2;

    // If AND operation is not 0000, line is completely invisible
    if (AND != 0)
    {
        cout << "Line segment is completely outside the viewport and rejected." << endl;
        return;
    }

    // Perform midpoint subdivision and check each midpoint
    int xm = (x1 + x2) / 2;
    int ym = (y1 + y2) / 2;
    int code_mid = computeCode(xm, ym, X_MIN, Y_MIN, X_MAX, Y_MAX);

    // Check if the midpoint is nearest to the boundary of the window
    if (code_mid == 0)
    {
        // Recursively call midpointSubdivisionClip for the two resulting line segments65
        midpointSubdivisionClip(x1, y1, xm, ym, X_MIN, Y_MIN, X_MAX, Y_MAX);
        midpointSubdivisionClip(xm, ym, x2, y2, X_MIN, Y_MIN, X_MAX, Y_MAX);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // User input for window dimensions
    int X_MIN, X_MAX, Y_MIN, Y_MAX;
    cout << "Enter coordinates of clipping window (xmin ymin xmax ymax): ";
    X_MIN = 10;
    Y_MIN = 10;
    X_MAX = 50;
    Y_MAX = 50;

    // Draw the viewport
    rectangle(X_MIN, Y_MIN, X_MAX, Y_MAX);

    // User input for line segment coordinates
    int x1, y1, x2, y2;
    cout << "Enter coordinates of line (x1 y1 x2 y2): ";
    x1 = 0;
    y1 = 0;
    x2 = 50;
    y2 = 50;

    // Draw the original line segment
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    // Clip the line segment using Midpoint Subdivision algorithm
    midpointSubdivisionClip(x1, y1, x2, y2, X_MIN, Y_MIN, X_MAX, Y_MAX);

    delay(5000);
    closegraph(); // Close the graphics window
    return 0;
}