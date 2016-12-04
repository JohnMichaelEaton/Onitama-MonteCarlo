#include "Card.hpp"
#include <random>
using namespace std;
default_random_engine engine{ random_device{}() };
uniform_int_distribution<int> dist(0, 15);

struct Piece {
	Piece() { color = 'n'; rank = 'n'; alive = false; }
	Piece(char c, char r) { color = c; rank = r; alive = true; }



	void kill() { color = 'n'; rank = 'n'; alive = false; }


	char color;
	char rank;
	bool alive;
};

class Gameboard {
private:
	vector<Card> current_cardlist; // The indeces matter for this array.  The index 0 and 1 are for 
	//the human player, index 2,3 are for the computer. Index 5 is the side card.
	Piece board[5][5];
	bool game_over;

	void setup_cards(const vector<Card>& cardpool) {

		for (int i = 0; i < 5; i++) {
			Card c;
			bool b = false;
			do {
				c = cardpool[dist(engine)];
				b = false;
				for (auto x : current_cardlist) {
					if (x.get_name() == c.get_name())
					{
						b = true;
					}
				}
			} while (b);
			current_cardlist.push_back(c);
		}


	}

	char setup(const vector<Card>& cardpool){
		board[4][0].color = 'r'; board[4][0].rank = 's';
		board[4][1].color = 'r'; board[4][1].rank = 's';
		board[4][2].color = 'r'; board[4][2].rank = 'm';
		board[4][3].color = 'r'; board[4][3].rank = 's';
		board[4][4].color = 'r'; board[4][4].rank = 's';

		board[0][0].color = 'b'; board[0][0].rank = 's';
		board[0][1].color = 'b'; board[0][1].rank = 's';
		board[0][2].color = 'b'; board[0][2].rank = 'm';
		board[0][3].color = 'b'; board[0][3].rank = 's';
		board[0][4].color = 'b'; board[0][4].rank = 's';

		setup_cards(cardpool);

		return 'r';
	}

	bool is_valid_move(int oldrow, int oldcolumn, int newrow, int newcolumn, Card card) {
		bool answer = false;
		for (auto move : card.get_available_moves()) {
			int row = oldrow;
			int column = oldcolumn;
			row += move.vertical;
			column += move.horizontal;
			if (row == newrow && column == newcolumn) {
				answer = true;
			}
		}
		return answer;
	}

	void update_game_over_status() {
		//search for the red master
		bool found_red = false;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (board[i][j].rank == 'm' && board[i][j].color == 'r') {
					found_red = true;
				}
			}
		}
		//search for the blue master
		bool found_blue = false;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (board[i][j].rank == 'm' && board[i][j].color == 'b') {
					found_blue = true;
				}
			}
		}

		if (!found_red || !found_blue) {
			game_over = true;
		}
	}

public:
	bool is_game_over() { return game_over; }

	void human_turn() {

		cout << "Your cards are: " << current_cardlist[0].get_name() << "  " << current_cardlist[1].get_name() << endl << endl;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << board[i][j].color << board[i][j].rank << "  ";
			}
			cout << endl;
		}


		Card c;
		bool go_on;
		string cardname;
		int oldspace_a;
		int oldspace_b;
		int newspace_a;
		int newspace_b;
		char garbage;

		do {
			go_on = true;
			cout << "Enter Your Move As (Card) (Starting Space) (Ending Space)\n-->";

			cin >> cardname >> oldspace_a >> garbage >> oldspace_b >> newspace_a >> garbage >> newspace_b;

			if (cardname != current_cardlist[0].get_name() && cardname != current_cardlist[1].get_name()) {
				cout << "Invalid Card Name!\n";
				go_on = false;
			}


	
			if (cardname == current_cardlist[0].get_name()) {
				c = current_cardlist[0];
			}
			if (cardname == current_cardlist[1].get_name()) {
				c = current_cardlist[1];
			}


			if (board[oldspace_a][oldspace_b].color != 'r') {
				cout << "That space does not contain your piece!\n";
				go_on = false;
			}

			if (!is_valid_move(oldspace_a, oldspace_b, newspace_a, newspace_b, c)) {
				cout << "That space is not a valid target!";
				go_on = false;
			}

		} while (!go_on);


		board[newspace_a][newspace_b] = board[oldspace_a][oldspace_b];
		board[oldspace_a][oldspace_b].kill();

		Card s = current_cardlist[4];
		int position;
		if (cardname == current_cardlist[0].get_name()) {
			position = 0;
		}
		else {
			position = 1;
		}

		current_cardlist[4] = current_cardlist[position];
		current_cardlist[position] = s;
		update_game_over_status();
	}



	void computer_turn() {
		cout << "The computer moved!";

		//create a vector of potential 
		//create threads to run simulations
		//each threads runs a simulation and updates the play and win counts from the first move
		//run for sixty seconds, finish current simulations and then stop
		//make the move with the highest win percentage
	}




	void gameplay_loop(const vector<Card>& cardpool) {
		char current_turn = setup(cardpool);

		while (!is_game_over()) {
			if (current_turn == 'b') {
				computer_turn();
				current_turn = 'r';
			}
			else {
				human_turn();
				current_turn = 'b';
			}
		}
		while (true)
		{
			cout << "ZACH WANTS POSITIVE REINFORCEMENT FOR HIS ACTIONS!!!!!!";
		}
		/*for (auto item : current_cardlist) {
			std::cout << item.get_name() << "  " << item.get_color() << endl;
		}*/
	}
};