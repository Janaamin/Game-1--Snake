#include <iostream>
using namespace std;


// first: make a few functoins
//1) is the set up   2)Draw  3)input   4)logic


//second: One Global Variable
bool gameOver;

//we need to use variables for map dimensions

const int width = 20; // 20 blocks
const int height = 20;

//Variables for the head positions and fruit position
int x, y, fruitX, fruitY, score;

//tracking the directions, so we dont have to hold down on a certain key inorder to make it go in one direction
//and to change the direction of the snake when we press a key

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

//make a variable that will hold th direction of the snake

eDirection dir;


void Setup()
{
	gameOver = false;

	dir = STOP; //snake will not move unless we start moving it

	x = width / 2; //so the snake can be ini the middle; centered on the map
	y = height / 2;

	fruitX = rand() % width;//randomly placing the fruitrs on the map; creating a random number from 0 to with -1
	fruitY = rand() % height;
	score = 0;

}


void Draw()
{

	system("cls"); //to clear the console window terminal

	for (int i = 0; i < width + 2; i++)//display the top border of the map
		cout << "#"; //top wall
	cout << endl; //move to the next line

	//print the map; walls
	for (int i = 0; i < height; i++) //h is for height
	{
		for (int j = 0; j < width; j++)//j is for width
		{

			//check if it is a first. if its first field
			//#####  
			//#   # //if j is equal to zero we will print that first wall charcter.
			//#####

			if (j == 0)
				cout << "#";

			//if it is not zero print blank space


			cout << " ";


			if (j == width - 1) // print the wall on the next side
				cout << "#";


		}
		cout << endl;

	}




	for (int i = 0; i < width + 2; i++)
		cout << "#"; //bottom walll
	cout << endl;


}

void Input()
{

}

void Logic()
{

}

int main()
{

	Setup();
	while (!gameOver)
		//while it is not gme over we are going to run:
	{
		Draw();
		Input();
		Logic();

		//sleep(10 sec); sleep function to slow the game but we will not be implementing it here;


	}
	//checking  hgjhgjhg


	return 0;

}
