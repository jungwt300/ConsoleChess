#pragma once
#include "Pieces.h"
class Board;


class Graphics
{
public:
	enum {
		Black,
		DarkGray,
		White,

	};
public:
	void GetGraphic(Board board);
private:
	void SetColor(unsigned short text, unsigned short back);
	const char* GetPieces(const Pieces *piece);
	void BgMaster(int x, int y, int tcolor);

private:
	char ghBoard[8][8];
};