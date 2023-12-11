//Maze
#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include "mazetry4A.cpp"


main(){
	
	initG();
	progView();
	x=100;y=100;
	row=1;col=1;
	
	do{
		input=getch();
		
		//navigation
		switch(input){
		case UP   : if(level1[row][col]!=0){row++; x+=30;} break;
		case DOWN : if(level1[row][col]!=0){row--; x+=30;} break;
		case LEFT : if(level1[row][col]!=0){col--; x+=30;} break;
		case RIGHT: if(level1[row][col]!=0){col++; x+=30;} break;	
		};
		
		
	}while(input!=27);
	
	
	
	getch();
	return 0;
}
	








