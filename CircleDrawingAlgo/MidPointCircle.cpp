#include <stdio.h>
#include <dos.h>
#include <graphics.h>

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc + x, yc + y, YELLOW);
    putpixel(xc - x, yc + y, YELLOW);
    putpixel(xc + x, yc - y, YELLOW);
    putpixel(xc - x, yc - y, YELLOW);
    putpixel(xc + y, yc + x, YELLOW);
    putpixel(xc - y, yc + x, YELLOW);
    putpixel(xc + y, yc - x, YELLOW);
    putpixel(xc - y, yc - x, YELLOW);
}
void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 1 - r;
    drawCircle(xc, yc, x, y);
    while (y > x)
    {
        int xk = x;
        int yk = y;
        x++;
        if (d >= 0)
        {
            y--;
            d = d + 2 * (xk - yk) + 5;
        }
        else
            d = d + 2 * xk + 3;
        drawCircle(xc, yc, x, y);
        delay(100);
    }
}

int main()
{
    int xc = 70, yc = 70, r = 50;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circleBres(xc, yc, r);
    return 0;
}
