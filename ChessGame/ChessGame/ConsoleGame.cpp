#include "ConsoleGame.h"
#include "Board.h"
#include "Graphics.h"
#include <iostream>
#include <windows.h>
void ConsoleGame::DisplayMenu()
{
	std::cout << "      ::::::::  :::    ::: :::::::::: ::::::::   :::::::: " << std::endl;
	std::cout << "    :+:    :+: :+:    :+: :+:       :+:    :+: :+:    :+: " << std::endl;
	std::cout << "   +:+        +:+    +:+ +:+       +:+        +:+         " << std::endl;
	std::cout << "  +#+        +#++:++#++ +#++:++#  +#++:++#++ +#++:++#++   " << std::endl;
	std::cout << " +#+        +#+    +#+ +#+              +#+        +#+    " << std::endl;
	std::cout << "#+#    #+# #+#    #+# #+#       #+#    #+# #+#    #+#     " << std::endl;
	std::cout << "########  ###    ### ########## ########   ########       " << std::endl;
	std::cout << "															" << std::endl;
	std::cout << "1)Start Chess												" << std::endl;
	std::cout << "0)Exit													" << std::endl;
	while (menu != 0) {
		std::cin >> menu;
		switch (menu) {
			case 1:
				SetGame();
			default :
				DisplayMenu();
		}
	}
}

void ConsoleGame::SetGame() {
	Board board;
	Graphics GhBoard;
	board.SetBoard();
	board.SetPieces();
	while (1) {
		GhBoard.GetGraphic(board);
		std::cout << "선택";
		std::cin >> inp_x >> inp_y;
		board.SelectTo(convXpos(inp_x), inp_y);
		std::cout << "이동";
		std::cin >> inp_x >> inp_y;
		board.MoveTo(convXpos(inp_x), inp_y);
	}
}


int ConsoleGame::convXpos(const char primeX)
{
	switch (primeX) {
	case 'A':
		return 0;
	case 'B':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	case 'E':
		return 4;
	case 'F':
		return 5;
	case 'G':
		return 6;
	case 'H':
		return 7;
	default:
		return 8;
	}
}

