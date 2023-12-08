#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include "mazetry2.cpp"


int main()
{
	initG();	
	
	x=100;y=100;
	row=1;col=1;
	
	setcolor(3);
	rectangle(x,y,x+50,y+50);
	setfillstyle(1, 14);
	circle(x+25, y+25, 10);
	floodfill(x+25, y+25, CYAN);
	circle(525, 325, 10);

	
	do{
		input=getch();	
		setcolor(WHITE);
		setfillstyle(1, 7);
		rectangle(x,y,x+50,y+50);
		floodfill(x+1, y+1, WHITE);
		
		//navigation
		switch(input){
			case UP		: if(row>1) {y-=50; row--;} break;
			case DOWN	: if(row<5) {y+=50; row++;} break;
			case LEFT	: if(col>1) {x-=50; col--;} break;
			case RIGHT	: if(col<9) {x+=50; col++;} break;
		}	
				
		setcolor(3);
		rectangle(x,y,x+50,y+50);
		setfillstyle(1, 14);
		circle(x+25, y+25, 10);
		floodfill(x+25, y+25, CYAN);
	}while(input!=27);
	
	
	getch();
	return 0;
}


