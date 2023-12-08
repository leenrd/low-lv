using namespace std;
#define N 7
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

//dclrtns
int x, y; 
int row,col; 
int input;



int level1 [3][3] = {
{2,1,1},
{0,0,0},
{1,1,3}
};

void progView(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
			cout<<level1[i][j];
		cout<<endl;	
}
}

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
	
}



