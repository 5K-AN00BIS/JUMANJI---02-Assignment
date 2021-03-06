// Ryan Bachman
// JUMANJI - Assignment 2
// October 12, 2018
// CSC215 C/C++ Programming

// Preprocessor directives
#include <iostream>
#include <string>

// Using directives
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Main function.
int main()
{
	// Constant integer sets the winning amount.
	const int GOLD_COINS = 50000;
	// Integers used throughout the program.
	int players, killed, survivors;
	// String variable that will hold the characters name.
	string character;

	// Get the information from the user.
	cout << "Welcome to JUMANJI\n";
	cout << "A game for those who seek to find, a way to leave their world behind.\n\n";
	cout << "Please enter the number of players that will playing.\n";
	// User enters the number of players who will play Jumanji.
	cout << "Enter a number: ";
	cin >> players;

	// User unknowingly enters the amount of people killed or taken further into Jumanji.
	cout << "Enter a number, smaller than the first: ";
	cin >> killed;

	// Arithmetic stating the amount of people who survive for the end of the game.
	survivors = players - killed;

	// User enters their name.
	cout << "Enter your character's name: ";
	cin >> character;

	// Tell the story
	cout << "\nA group of " << players << " teenagers went to detention ";
	cout << "-- and were told that they need to clean out the school basement. ";
	cout << "The main player, " << character << " led the group effort in cleaning.\n";
	cout << "\nA large football player finds an old gaming system and plugs it in. ";
	cout << "After turning on the console, all " << players << " people were sucked into the game! ";
	cout << "\nThe narrator in the game speaks, 'Win and you will survive and be richer than your wildest dreams. ";
	cout << "All agreed to be under the command of " << character << " as he kept a level head so far.\n";
	cout << "The group had faced many challenges within the game. ";
	cout << "Of the players originally, " << killed << " were either killed or taken further into Jumanji, ";
	cout << "leaving just " << survivors << " players left in the group.\n";

	cout << "\nThe groups numbers were dwindling as they try to defeat the game. ";
	cout << "Fortunately, somebody was lucky enough to roll the right number and win. ";
	cout << "They were teleported out of the game and into their own bodies around a sack of coins. ";
	cout << "The surviving players split " << GOLD_COINS << " gold coins. ";
	cout << character << " held on to the extra " << (GOLD_COINS % survivors);
	cout << " coins for leading what he could of the group to freedom.\n";

	return 0;
}