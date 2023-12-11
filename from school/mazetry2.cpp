using namespace std;
#define N 7
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

//delcarations
void lvl1();

//int table[N][11]; //5x5
int x, y; //graphics board
int row,col; //progView
int input;



void initG(){
	//initialize window
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "");
	
	while(1)
	{
	setcolor(14);
	settextstyle(10, 0, 12);
	outtextxy(279.5, 199.5, "MAZE");
	outtextxy(254.5, 220.5, "BSCS 21A1");
	settextstyle(10, 0, 12);
	setcolor(11);
	outtextxy(189.5, 239.5, "Press spacebar to play!");
	char ch=getch();
	if(ch==' ') break;
 	getch();
	}
	cleardevice();
	lvl1();
	
}
	

void lvl1(){
	
	setcolor(WHITE);
	setfillstyle(1,GREEN);
	outtextxy(100, 50, "Level 1 | Use arrowkeys for movement");
	
	int i,j;
	//board
	setcolor(WHITE);
	setfillstyle(1,7);
	bar(100,100,100+4*50+250,100+4*50+50);
	for(i=0; i<11-2; i++)
		for(j=0; j<N-2; j++)
			rectangle(100+i*50,100+j*50,100+i*50+50,100+j*50+50);
		
}
	

	
	
	
