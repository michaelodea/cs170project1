#include <string>
#include <queue>
#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>

//need to include basicPuzzle.h, astarMisplacedTile.h, astarManhattanDistance.h later, uniformCostSearch.h,

using namespace std;

//basic menu interface right now
int main(){

	vector<int> puzzle; //template for default/completed puzzle
	puzzle.push_back(1);
	puzzle.push_back(2);
	puzzle.push_back(3);
	puzzle.push_back(4);
	puzzle.push_back(5);
	puzzle.push_back(6);
	puzzle.push_back(7);
	puzzle.push_back(8);
	puzzle.push_back(0); //zero is the blank space

	int createPuzzle; //initial creating of puzzle
	createPuzzle = 0;
	cout << "This is my puzzle solver! \n\n";
	cout << "Press 1 for a default puzzle or press 2 to make your own! \n";
	cin >> createPuzzle;

	if(createPuzzle != 1 && createPuzzle != 2){
		cout <<	"Please enter either 1 or 2 to make a puzzle. \n";
		cin >> createPuzzle;
		cout << endl;
		while (createPuzzle != 1 && createPuzzle != 2){
			cout << "Please enter either 1 or 2 to make a puzzle. \n";
		        cin >> createPuzzle;
		}
	}
	else if(createPuzzle == 1){
		cout << "You have chosen a default puzzle! \n";
		//needs to output default puzzle in proper format
	}

	int userInteger; //creates a puzzle depending on what the user inputs
	int puzzleSize = 9;
	int i = 0; //for a while loop to input numbers until it is inputted size - i times
	if(createPuzzle == 2){
		puzzle = {};
		cout << "Please how big you would like the puzzle to be? \n"; //standard size is nine, three by three
		cin >> puzzleSize;
		
		cout << endl;
		cout << "Enter your puzzle one integer at a time, make sure not to duplicate any and to include them all. \n";
		while(i < (puzzleSize - 1)){
			cout << "One integer: ";
			cin >> userInteger;
			cout << endl;
			puzzle.push_back(userInteger);
			i++;
		}
		cout << "Puzzle created! Here is your puzzle: \n";
		//output the created puzzle that is within the vector
	}

	//Search Algorithms
	int algorithm;
	cout << "How would you like to solve your puzzle? \n";
	cout << "What search algorithm would you like to use? \n";
	cout << "Press 1 to use Uniform Cost Search, 2 for A* with the Misplaced Tile heuristic, and 3 for A* with the Manhattan Distance heuristic. \n";
	
	if(algorithm != 1 && algorithm != 2 && algorithm != 3){
	
	
	}
}


