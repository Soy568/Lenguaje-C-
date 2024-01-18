#include <iostream>;
#include <windows.h>;
#include <time.h>;

using namespace std;

bool gameOver;
const int W=20; 
const int H=20;
int headPos[2], foodPos[2];
int score;
enum directionEnum {STOP=0, LEFT, RIGHT, UP, DOWN};
directionEnum snakeDirection;

void init (){
	system("cls");
	gameOver = false;
	headPos[0]=W/2;
	headPos[1]=H/2;
	foodPos[0]=rand()%W;
	foodPos[1]=rand()%H;
	snakeDirection = STOP;
	score = 0;
}

void render (){
	
}

void input (){
	
}

void gameLogic (){
	
}

int main(){
	
	init();
	while(!gameOver){
		render();
		input();
		gameLogic();
		Sleep (50);
	}
	
	srand(time(0));
	
	return 0;
}