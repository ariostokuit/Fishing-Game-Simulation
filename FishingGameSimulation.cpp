// FishingGameSimulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program demonstrates usage of classes for a fishing game simulation

#include "pch.h"
#include "FishingGameSimulation.h"
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	FishingGame game;
	Dice dice1;
	int roundNum = 1;
	char keepPlaying = 'y';
	int score = game.getPoints();
	srand(time(NULL));


	cout << "Welcome to the Fishing Game Simulator\n";
	cout << "Press Enter to continue to play\n";
	system("pause");
	do {

		cout << "Current Score: " << score << endl;
		cout << "Catching a fish right now..........\n";
		dice1.rollDice();
		game.setFish(dice1);
		cout << "You caught " << game.getFish() << endl;
		game.setPoints(dice1);
		cout << "You get " << game.getPoints() << " points" << endl;
		score += game.getPoints();
		cout << "Do you want to continue playing (y/n):";
		cin >> keepPlaying;
	} while (keepPlaying == 'y' || keepPlaying == 'Y');

	cout << "Game over\n";
	cout << "Final Score: " << score << endl;
	
	return 0;
}
