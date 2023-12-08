//connect4 
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include "connect4A.cpp"
main()
{
	initG();
	
	
	player=1;
	x=50;y=100;
	row=0;col=0;
	
	setcolor(3);
	rectangle(x,y,x+50,y+50);
	
	setcolor(WHITE);
	outtextxy(490, 120, "Player 1 Turn");
	circle(460,130,20);
	setfillstyle(1, YELLOW);
	floodfill(460, 130, WHITE);
	
	
	do{
		input=getch();	
		setcolor(WHITE);
		rectangle(x,y,x+50,y+50);
		
		
		//navigation
		switch(input){
			case LEFT	: if(col>0) {x-=50; col--;} break;
			case RIGHT	: if(col<6) {x+=50; col++;} break;
		}	
		
		
		//markings
		if(input==32)
			if(table[row][col]==0)
				if(player==1){ player1(); rules(); player=2;}
				else 		 { player2(); rules(); player=1;}
		
		progView();		
		turnCaption();
		setcolor(3);
		rectangle(x,y,x+50,y+50);
	}while(input!=27);	
	
	
	return 0;
}
