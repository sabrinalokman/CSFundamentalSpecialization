#include "Game.h"
#include "Stack.h"
#include "Cube.h"
#include <iostream>
using std::cout;
using std::endl;

void Game::solve() {
	cout << *this << endl;
}

Game::Game() {

	// Create the three empty stacks:
	for (int i = 0; i < 3; i++) {
		Stack stackOfCubes;
		stacks_.push_back( stackOfCubes );
	}

	//create the four cubes, placing each on the first stack:

	Cube blue(4, uiuc::HSLAPixel::BLUE);
	stacks_[0].push_back(blue);

	Cube orange(3, uiuc::HSLAPixel::ORANGE);
	stacks_[0].push_back(orange);

	Cube purple(2, uiuc::HSLAPixel::PURPLE);
	stacks_[0].push_back(purple);

	Cube yellow(1, uiuc::HSLAPixel::YELLOW);
	stacks_[0].push_back(yellow);
}

std::ostream& operator <<(std::ostream & os, const Game & game) {
	for (unsigned i = 0; i < game.stacks_.size(); i++) {
		os << "Stack[" << i << "]: " << game.stacks_[i] << std::endl;
	}
	return os;
}