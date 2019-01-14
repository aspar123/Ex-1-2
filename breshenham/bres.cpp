# include <iostream.h>
# include <conio.h>
# include <graphics.h>
# include <math.h>
char IncFlag;
void Bresenham(int x1,int x2,int y1,int y2);
void DrawLine(int X,int Y,int End,int PInc,int NInc,int P,int XInc,int YInc);
void main()
{
    int gDriver=DETECT, gMode;
    int x1,x2,y1,y2;

    void Bresenham(int,int,int,int);
    initgraph(&gDriver,&gMode,"c:\\tc\\bgi");

    cout<<endl<<"x1   : ";
    cin>>x1;
    cout<<endl<<"y1   : ";
    cin>>y1;
    cout<<endl<<"x2   : ";
    cin>>x2;
    cout<<endl<<"y2   : ";
    cin>>y2;
    line(320,0,320,480);
    line(0,240,640,240);
    Bresenham(x1,x2,y1,y2);
    getch();
}

void Bresenham(int x1,int x2,int y1,int y2)
{
    int S,O,End;
    int P;
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    float Slope;
    int PInc,NInc,XInc,YInc;
    if (dx == 0)  //Slope Infinite
    {
    }
    else
    {
        Slope = (float)(y1 - y2) / (x1 - x2);
        if (Slope>-1 && Slope<1)
        {
            IncFlag = 'X';
            PInc = 2 * (dy - dx);
            NInc = 2 * dy;
            P = 2 * dy - dx;
            if (x1>x2)
            {
                S = x2;
                O = y2;
                End = x1;
            }
            else
            {
                S = x1;
                O = y1;
                End = x2;
            }
//            DrawLine(x,y,End,PInc,NInc,P,XInc,YInc);
        }
        else
        {
            IncFlag = 'Y';
            PInc = 2 * (dx - dy);
            NInc = 2 * dx;
            P = 2 * dx - dy;
            if (y1 > y2)
            {
                O = x2;
                S = y2;
                End = y1;
            }
            else
            {
                O = x1;
                S = y1;
                End = y2;
            }
        }
        if (IncFlag == 'X')
            putpixel(320+S,240-O,12);
        else
            putpixel(320+O,240-S,12);
        while (S <= End)
        {
            S++;
            if (P<0)
                P = P + NInc;
            else
            {
                P = P + PInc;
                if (Slope>0.0)
                    O++;
                else
                    O--;
            }
            if (IncFlag == 'X')
                putpixel(320+S,240-O,12);
            else
                putpixel(320+O,240-S,12);
        }
    }
}