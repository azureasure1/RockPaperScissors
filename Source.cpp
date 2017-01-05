/*
Programmer: Cody Griffin
Date: 1/4/2017
Program: Rock Paper Scissors
*/

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void Game() {
	//Makes the CPU choice more random
	srand(time(NULL));

	//Variables
	string choices[] = { "Rock", "Paper", "Scissors" };
	int randIndex = rand() % 3;
	string userChoice;
	string cpuChoice = choices[randIndex];

	//Asks user for choice between rock, paper, or scissors
	cout << "What is your decision, Rock, Paper, or Scissors?" << endl;
	cin >> userChoice;
	cout << endl;

	//Displays the user's choice and the cpu's choice
	cout << "Your choice: " << userChoice << endl;
	cout << "The computer's choice: " << cpuChoice << endl;

	//Determines winner of game if user chooses Rock
	if (userChoice == "Rock" || userChoice == "rock") {

		if ((userChoice == "Rock" || userChoice == "rock") && cpuChoice == "Rock") {
			cout << "It is a tie! Let's replay! " << endl;
			Game();
		}
		else if ((userChoice == "Rock" || userChoice == "rock") && cpuChoice == "Paper") {
			cout << "Paper defeats rock! Sorry, you have been defeated." << endl;
		}
		else if ((userChoice == "Rock" || userChoice == "rock") && cpuChoice == "Scissors") {
			cout << "Rock defeats scissors! Congratulations, you win!" << endl;
		}
	}//End rock decisions 

	//Determines winner of game if user chooses Paper
	else if (userChoice == "Paper" || userChoice == "paper") {

		if ((userChoice == "Paper" || userChoice == "paper") && cpuChoice== "Paper") {
			cout << "It is a tie! Let's replay! " << endl;
			Game();
		}
		else if ((userChoice == "Paper" || userChoice == "paper") && cpuChoice == "Rock") {
			cout << "Paper defeats rock! Congratulations, you win!" << endl;
		}
		else if ((userChoice == "Paper" || userChoice == "paper") && cpuChoice == "Scissors") {
			cout << "Scissors defeats paper! Sorry, you have been defeated." << endl;
		}
	}//End paper decisions 

	//Determines winner of game if user chooses scissors
	else if (userChoice == "Scissors" || userChoice == "scissors") {

		if ((userChoice == "Scissors" || userChoice == "scissors") && cpuChoice == "Scissors") {
			cout << "It is a tie! Let's replay! " << endl;
			Game();
		}
		else if ((userChoice == "Scissors" || userChoice == "scissors") && cpuChoice == "Rock") {
			cout << "Rock defeats scissors! Sorry, you have been defeated." << endl;
		}
		else if ((userChoice == "Scissors" || userChoice == "scissors") && cpuChoice == "Paper") {
			cout << "Scissors defeats paper! Congratulations, you win!" << endl;
		}
	}//End scissors decisions

	//Informs the user that the input that he/she has entered is invalid and must try again
	else {
		cout << "Invalid input. Please try again." << endl;
		Game();
	}
}

//This function states the rules of Rock Paper Scissors
void Rules() {
	cout << "The objective of the game is to defeat the CPU. Here are the combinations and their results: " << endl;
	cout << "Rock: Defeats Scissors / Loses to Paper" << endl;
	cout << "Paper: Defeats Rock / Loses to Scissors" << endl;
	cout << "Scissors: Defeats Paper / Loses to Rock" << endl;
	cout << "If there is a tie, there will be a redo." << endl;
	
}

//Ends the program
int Quit() {
	cin.get();
	cin.ignore();
	return 0;
}

//Main function
int main() {
	int decision;

	//Displays the welcome message and asks the user for a decision
	cout << "Welcome to the Rock Paper Scissors Game!" << endl;
	
	cout << "Please select an option by typing the number that corresponds to the option: " << endl;
	cout << "1. Play game" << endl;
	cout << "2. Rules" << endl;
	cout << "3. Quit" << endl;
	cin >> decision;
	cout << endl;

	if (decision == 1) {
		Game();
	}
	else if (decision == 2) {
		Rules();
	}
	else if (decision == 3) {
		Quit();
	}
	else {
		cout << "This is not a valid option." << endl;
	}

	//Goes to the quit function, which ends the program
	Quit();
}



