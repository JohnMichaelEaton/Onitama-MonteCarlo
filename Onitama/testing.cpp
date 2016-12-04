#include "Onitama.hpp"
using namespace std;

void main(){
	for (auto item : Onitama::cardlist) {
		cout <<  item.get_name() << "  " <<  item.get_color() << endl;
	}

	cout << endl << endl;

	Gameboard mygame;
	mygame.gameplay_loop(Onitama::cardlist);
}