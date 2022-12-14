#include <iostream>
#include "Board.h"
#include "Pawn.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
void Board::SetBoard() {	//Board 배열 NULL로 초기화
		std::cout << "SetBoard()" << std::endl;
		for (int x = 0; x < 8; x++) {
			for (int y = 0; y < 8; y++) {
				board[y][x] = NULL;
			}
		;}
	};
void Board::SetPieces() {	//Board 배열에 Piece 객체 배열
		std::cout << "SetPieces()" << std::endl;
		int area = 0;
		for (int team = Pieces::White; team < 2; team++) {	//특
			board[area][0] = new Rook(team);
			board[area][1] = new Knight(team);
			board[area][2] = new Bishop(team);
			board[area][3] = new Queen(team);
			board[area][4] = new King(team);
			board[area][5] = new Bishop(team);
			board[area][6] = new Knight(team);
			board[area][7] = new Rook(team);
			area = 7;
		}
		for (int x = 0; x < 8; x++) {	//폰 생성
			board[1][x] = new Pawn(Pieces::White);
			board[6][x] = new Pawn(Pieces::Black);
		}

	}

void Board::SelectTo(int x, int y)
{
	selectx = x;
	selecty = 8-y;
}
void Board::MoveTo(int x, int y)
{
	movex = x;
	movey = 8-y;

	board[movey][movex] = board[selecty][selectx];
	board[selecty][selectx] = NULL;
}
