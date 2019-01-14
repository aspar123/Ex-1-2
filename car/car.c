#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
using namespace std;
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gd,NULL);
cout<<getmaxx;
circle(150,360,25);
circle(150,360,50);
circle(520,360,50);
circle(520,360,25);
arc(150,360,180,360,60);
arc(520,360,180,360,60);
line(200,360,470,360);
line(140,300,530,300);
line(50,360,100,360);
line(570,360,610,360);
line(240,360,240,200);
line(420,360,420,240);
line(420,240,400,190);
line(240,200,250,190);
line(50,190,610,190);
arc(150,255,120,328,120);
line(400,190,340,25);
line(420,190,360,25);
line(340,25,360,25);
line(430,190,360,25);
line(50,190,50,360);
arc(50,100,220,270,110);
arc(510,280,313,360,120);
arc(510,280,0,43,120);
line(610,190,610,360);
line(60,300,60,260);
line(20,290,20,260);
line(60,300,20,290);
line(60,260,20,260);
line(590,250,590,300);
line(590,250,610,250);
line(590,300,610,300);
delay(50000);
closegraph();
return 0;
}
