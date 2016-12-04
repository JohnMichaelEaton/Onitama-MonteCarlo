#include <vector>
#include "Gameboard.hpp"
using std::vector;
//HUMANS ARE RED!!!!

class Onitama {
private:
	Gameboard current_board;
public:
	static vector<Card> cardlist;
};

vector<Card> create_cardlist() {
	vector<Card> list;

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "boar"; color = 'r';

		move.horizontal = 0;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "cobra"; color = 'r';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "crab"; color = 'b';

		move.horizontal = 0;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -2;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 2;
		move.vertical = 0;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "crane"; color = 'b';

		move.horizontal = 0;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "dragon"; color = 'r';

		move.horizontal = -2;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 2;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "eel"; color = 'b';

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "elephant"; color = 'r';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);
		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "frog"; color = 'r';

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -2;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "goose"; color = 'b';

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "horse"; color = 'r';

		move.horizontal = 0;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 0;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "mantis"; color = 'r';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 0;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "monkey"; color = 'b';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 1;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);
		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "ox"; color = 'b';

		move.horizontal = 0;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = 0;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "rabbit"; color = 'b';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 2;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "rooster"; color = 'r';

		move.horizontal = 1;
		move.vertical = -1;
		moves.push_back(move);

		move.horizontal = 1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 0;
		moves.push_back(move);

		move.horizontal = -1;
		move.vertical = 1;
		moves.push_back(move);
		Card c(name, color, moves);

		list.push_back(c);
	}

	{
		string name;
		char color;
		Move move(0, 0);
		vector<Move> moves;

		name = "tiger"; color = 'b';

		move.horizontal = 0;
		move.vertical = -2;
		moves.push_back(move);

		move.horizontal = 0;
		move.vertical = 1;
		moves.push_back(move);

		Card c(name, color, moves);

		list.push_back(c);
	}

	return list;
}

vector<Card> Onitama::cardlist = create_cardlist();


