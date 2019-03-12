#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

class Dice {
private:
	int rolledVal;
public:
	Dice();
	void rollDice();
	int getRolledVal();
};
Dice::Dice() {
	rolledVal = 1; //start the face up value of the dice to be 1
}
void Dice::rollDice() {
	rolledVal = (rand() % 6) + 1; // generate a number between 1 -6
}
int Dice::getRolledVal() { return rolledVal; }
	

class FishingGame {
private:
	std::string fish; 
	int points;
public:
	FishingGame();
	void setFish(Dice); 
	std::string getFish();
	void setPoints(Dice);
	int getPoints();
};

FishingGame::FishingGame() {
	fish = " ";
	points = 0;
}
void FishingGame::setFish(Dice dice) {
	if (dice.getRolledVal() == 1) { fish = "a huge fish"; }
	if (dice.getRolledVal() == 2) { fish = "an old shoe"; }
	if (dice.getRolledVal() == 3) { fish = "a little fish"; }
	if (dice.getRolledVal() == 4) { fish = "nothing"; }
	if (dice.getRolledVal() == 5) { fish = "a rare fish"; }
	if (dice.getRolledVal() == 6) fish = "A girlfriend"; //just for giggles
}
std::string FishingGame::getFish() { return fish; }
void FishingGame::setPoints(Dice dice){
	if (dice.getRolledVal() == 1) { points = 5; }
	if (dice.getRolledVal() == 2) { points = -3; }
	if (dice.getRolledVal() == 3) { points = 3; }
	if (dice.getRolledVal() == 4) { points = -5; }
	if (dice.getRolledVal() == 5) { points = 10; }
	if (dice.getRolledVal() == 6) points = 100; //Again just for giggles
}

int FishingGame::getPoints() {return points;}