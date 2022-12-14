#include <windows.h>
#include <iostream>
#include "Graphics.h"
#include "Board.h"
#include "Pieces.h"

void Graphics::SetColor(unsigned short text, unsigned short back){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

const char *Graphics::GetPieces(const Pieces* piece){
	if (piece == NULL)	//NULL Àº ºóÄ­
		return "  ";
	else {
		switch (piece->r_type) {
		case Pieces::King:
			return "Ki";
		case Pieces::Queen:
			return "Qu";
		case Pieces::Rook:
			return "Ro";
		case Pieces::Knight:
			return "Kn";
		case Pieces::BIshop:
			return "Bi";
		case Pieces::Pawn:
			return "Pa";
		default:
			return "  ";
		}
	}
	return 0;
}


void Graphics::BgMaster(int x, int y, const int color) {
	unsigned short tcolor;
	x += 1;
	y += 1;
	if (color == Pieces::White)
		tcolor = 15;	//WHITE
	else if (color == Pieces::Black)
		tcolor = 8;	//GREY
	else
		tcolor = 0;

	if (y % 2 == 0) {//Â¦¼öÄ­
		if (x % 2 == 0)	//Âï¼öÀÏ¶§
			SetColor(tcolor, 0);
		else if (x % 2 == 1)		//È¦¼öÀÏ¶§
			SetColor(tcolor, 4);
	}
	else if (y % 2 == 1) {
		if (x % 2 == 1)	//È¦¼öÀÏ¶§
			SetColor(tcolor, 0);
		else if (x%2==0)		//Â¦¼öÀÏ¶§
			SetColor(tcolor, 4);
	}
}

void Graphics::GetGraphic(const Board board)
{
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {

			if (board.board[y][x] == NULL)
				BgMaster(x, y, 0);
			else {
				if (board.board[y][x]->r_color == Pieces::Black)
					BgMaster(x, y, Pieces::Black);
				else if (board.board[y][x]->r_color == Pieces::White)
					BgMaster(x, y, Pieces::White);
			}
			std::cout<<GetPieces(board.board[y][x]);
		}
		SetColor(3, 0);
		std::cout<< "  "<< 8-y << std::endl;
	}

	std::cout << std::endl;
	std::cout << "A_B_C_D_E_F_G_H_" << std::endl;
	std::cout << std::endl;
}

