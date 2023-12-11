/* Act no. 4: Graphics */
#include<graphics.h>
#include<iostream>
using namespace std;

main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\tc\bgi");
	setfillstyle(8, 11);
	settextstyle(10, 0, 11);
	setcolor(7);
	
	
	rectangle(1, 479, 639, 1);
	line(319.5, 0, 319.5, 479);
	line(0, 479/2, 639, 479/2);
	
	bar(639/2-100, 479/2-50, 639/2+100, 479/2+50);
	rectangle(639/2-100, 479/2-50, 639/2+100, 479/2+50);
	setfillstyle(5, 0);
	
	bar(0, 0, 3, 3);
	rectangle(0, 0, 3, 3);
	outtextxy(639/2-70, 479/2-40, "Data Structures");
	outtextxy(639/2-29, 479/2-19, "Zarate");
	outtextxy(639/2-45, 479/2, "BSCS 21A1");
	
	/*Act 5.*/
	setfillstyle(1, 9);
	circle(639/4-20, 479/4, 80);
	arc(639/4-20, 479/4, 180, 360, 60);
	ellipse(578/4-30, 479/4, 0, 360, 7, 15);
	ellipse(578/4-30, 479/4, 0, 360, 2, 5);
	ellipse(578/4+19, 479/4, 0, 360, 7, 15);
	ellipse(578/4+19, 479/4, 0, 360, 2, 5);
	floodfill(639/4-20, 479/4, 7);
	
	
	/* Act 6 */
	setfillstyle(7, 5);
	line(150,285,170,340);
	line(150,285,130,340);
	line(70,340,130,340);
	line(170,340,230,340);
	line(110,375,70,340);
	line(110,375,95,430);
	line(95,430,155,390);
	line(205,430,155,390);
	line(205,430,195,375);
	line(195,375,230,340);
	floodfill(120, 400, 7);
	
	/*Act 7 */
	setfillstyle(5, 7);
	line(400,330,500,330);
	line(400,330,400,360);
	line(500,330,500,360);
	line(450,330,450,360);
	line(370,360,550,360);
	line(370,360,370,390);
	line(550,360,550,390);
	circle(500, 390, 20);
	circle(410, 390, 20);
	line(370,390,550,390);
	floodfill(410, 365, 7);

	

	
	getch();
	return 0;
}

