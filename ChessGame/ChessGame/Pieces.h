#pragma once
class Pieces {
public:
	enum eColor {
		White,
		Black
	};
	enum eType {
		King,
		Queen,
		Rook,
		Knight,
		BIshop,
		Pawn
	};
	int& r_type = type;
	int& r_color = color;
public:
	Pieces(Pieces& rhs);
	Pieces& operator=(const Pieces &rhs);
	Pieces(int type_, int color_);

	bool MoveTo(int x, char y);

	bool SelectTo(int, char y);
	
private:
	int type, color;
};