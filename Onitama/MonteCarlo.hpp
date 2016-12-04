#include "Gameboard.hpp"
#include <thread>
#include <map>
using namespace std;

struct win_played_ratio {
	int win;
	int played;
};

class Simulator {
private:


public:


};

class MonteCarlo {
private:
	Piece original_board[5][5];

	map<string, win_played_ratio> potential_moves;

	vector<thread> threads;
public:
	string run_simulations(){
		//spawn the threads
		//return the best move
	}

	void playout() {
		//start a timer
		//run simulations
			//make an initial move
			//play the game out
			//update the potential_moves
		//after x seconds, stop
	}
};