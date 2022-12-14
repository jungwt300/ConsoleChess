class Pieces;
class Board {
public:
	friend class Graphics;
	friend class ConsoleMenu;
	void SetBoard();
	void SetPieces();
	Pieces *board[8][8];
	void SelectTo(int x, int y);
	void MoveTo(int x, int y);
	Pieces* selector;
private :
	char x_prime;
	int selectx;
	int selecty;
	int movex;
	int movey;
};