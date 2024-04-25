#include <GL/glut.h>
#include <cmath>

void drawHexagon(float centerX, float centerY, float sideLength) {
    glBegin(GL_POLYGON);
    float angle = 60.0f; // Angle between two consecutive vertices of a regular hexagon
    for (int i = 0; i < 6; i++) {
        float theta = angle * float(i) * (M_PI / 180.0f);
        float x = centerX + sideLength * cosf(theta);
        float y = centerY + sideLength * sinf(theta);
        glVertex2f(x, y);
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Set color to red
    glColor3f(1.0, 0.0, 0.0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Draw a hexagon at the center of the window with side length 0.5
    drawHexagon(0.0, 0.0, 0.5);

    glFlush();
}


void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); // Set background color to black
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Set coordinate system
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500); // Set window size
    glutInitWindowPosition(100, 100); // Set window position
    glutCreateWindow("OpenGL Hexagon");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
