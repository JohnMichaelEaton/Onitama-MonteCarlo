#include <string>
#include <vector>
#include <iostream>
using std::vector;
using std::string;

struct Move {
	Move(int h, int v) { horizontal = h; vertical = v; }
	int horizontal;
	int vertical;
};

class Card {
private:
	vector<Move> available_moves;
	char color;
	string name;

public:
	vector<Move> get_available_moves() { return available_moves; }
	char get_color() { return color; }
	string get_name() { return name; }

	Card() {}
	Card(string in_name, char in_color, vector<Move> in_available_moves) {
		name = in_name;
		color = in_color;
		available_moves = in_available_moves;
	}
};