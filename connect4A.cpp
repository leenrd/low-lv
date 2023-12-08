using namespace std;
#define N 7
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int i;
//dclrtns
//VARIABLE DECLARATION
void animate();
void game();
int table[N][6]; //7x6
int player;// turn
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
	settextstyle(6, 0, 3);
	outtextxy(244, 199.5, "Connect 4");
	setcolor(15);
	settextstyle(3, 0, 1);
	outtextxy(225, 239.5, "Press spacebar to play!");
	char ch=getch();
	if(ch==' ') break;
 	getch();
	}
	cleardevice();
	game();
	
}

void game(){
	//Captions
	setcolor(WHITE);
	settextstyle(3, 0, 1);
	outtextxy(50, 430, " Press ESC to Quit game | Use Left & Right arrow keys for movement ");
	
	int i,j;
	//board
	setcolor(WHITE);
	setfillstyle(1,BLUE);
	bar(50,150,100+4*50+100,100+4*50+100);
	for(i=0; i<N; i++)
		for(j=0; j<6; j++)
			rectangle(50+i*50,100+j*50,50+i*50+50,100+j*50+50);
	
	//programmers
	for(i=0; i<6; i++)
		for(j=0; j<N; j++)
			table[i][j]=0;		
}

void progView(){
	system("cls");
	for(int i=0; i<6; i++){
		for(int j=0; j<N; j++)
			cout<<table[i][j];
		cout<<endl;	
}
}

int validity(int x, int col){
	return table[6][col] == 0;
}

void player1(){
	//yellow 
	setcolor(WHITE);
	circle(x+25,y+25,20);
	setfillstyle(1, YELLOW);
	floodfill(x+25, y+25, WHITE);
	
	table[row][col]=player;	
}

void player2(){
	//red
	setcolor(WHITE);
	circle(x+25,y+25,20);
	setfillstyle(1, RED);
	floodfill(x+25, y+25, WHITE);
	
	
	table[row][col]=player;
}

void turnCaption(){	
	if(player==1){
		outtextxy(490, 120, "Player 1 Turn");
		setcolor(WHITE);
		circle(460,130,20);
		setfillstyle(1, YELLOW);
		floodfill(460, 130, WHITE);
		}
	else {
		outtextxy(490, 120, "Player 2 Turn");
		setcolor(WHITE);
		circle(460,130,20);
		setfillstyle(1, RED);
		floodfill(460, 130, WHITE);
	}
	
}
void animate(){
	for(int i=1; i<row; i++){
		circle(25,25+i,20);
		delay(10);
		cleardevice();	
	}
}

void winner(){
	if(player==1){
		setcolor(YELLOW);
		settextstyle(9, 0, 3);
		outtextxy(50,50,"Player 1 wins!");
		getch();exit(1);
	}
	else{
		setcolor(RED);
		settextstyle(9, 0, 3);
		outtextxy(50,50,"Player 2 wins!");
		getch();exit(1);
	}
}

void rules(){
//horizontal 1
	if(table[row][col]==table[row][col+1] && table[row][col]== table[row][col+2] && table[row][col]== table[row][col+3]) winner();	

//horizontal 2
	if(table[row][col]==table[row][col-1] && table[row][col]== table[row][col+1] && table[row][col]== table[row][col+2]) winner();	
	
//horizontal 3	
	if(table[row][col]==table[row][col-2] && table[row][col]== table[row][col-1] && table[row][col]== table[row][col+1]) winner();

//horizontal 4	
	if(table[row][col]==table[row][col-3] && table[row][col]== table[row][col-2] && table[row][col]== table[row][col-1]) winner();	
	
//vertical 1
	if(table[row][col]==table[row+1][col] && table[row][col]== table[row+2][col] && table[row][col]== table[row+3][col]) winner();	
	
//vertical 2
	if(table[row][col]==table[row-1][col] && table[row][col]== table[row+1][col] && table[row][col]== table[row+2][col]) winner();	
	
//vertical 3
	if(table[row][col]==table[row-1][col] && table[row][col]== table[row-2][col] && table[row][col]== table[row+1][col]) winner();	
	
//vertical 4
	if(table[row][col]==table[row-1][col] && table[row][col]== table[row-2][col] && table[row][col]== table[row-3][col]) winner();
	
//diagonal 1
	if(table[row][col]==table[row+1][col+1] && table[row][col]== table[row+2][col+2] && table[row][col]== table[row+3][col+3]) winner();	

//diagonal 2
	if(table[row][col]==table[row+1][col+1] && table[row][col]== table[row-1][col-1] && table[row][col]== table[row+2][col+2]) winner();	
	
//diagonal 3
	if(table[row][col]==table[row-1][col-1] && table[row][col]== table[row-2][col-2] && table[row][col]== table[row+1][col+1]) winner();	

//diagonal 4
	if(table[row][col]==table[row+1][col-1] && table[row][col]== table[row+2][col-2] && table[row][col]== table[row+3][col-3]) winner();

//diagonal 5
	if(table[row][col]==table[row+1][col-1] && table[row][col]== table[row-1][col+1] table[row][col]==table[row+2][col-2]) winner();

//diagonal 6
	if(table[row][col]==table[row-1][col+1] && table[row][col]== table[row-2][col+2] && table[row][col]== table[row+1][col-1]) winner();	
	
//diagonal 7
	if(table[row][col]==table[row-1][col-1] && table[row][col]== table[row-2][col-2] && table[row][col]== table[row-3][col-3]) winner();
	
//diagonal 8
	if(table[row][col]==table[row-1][col+1] && table[row][col]== table[row-2][col+2] && table[row][col]== table[row-3][col+3]) winner();
}

