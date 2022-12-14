#pragma once
//      ::::::::  :::    ::: :::::::::: ::::::::   :::::::: 
//    :+:    :+: :+:    :+: :+:       :+:    :+: :+:    :+: 
//   +:+        +:+    +:+ +:+       +:+        +:+         
//  +#+        +#++:++#++ +#++:++#  +#++:++#++ +#++:++#++   
// +#+        +#+    +#+ +#+              +#+        +#+    
//#+#    #+# #+#    #+# #+#       #+#    #+# #+#    #+#     
//########  ###    ### ########## ########   ########       
class Board;
class ConsoleGame
{
public:
	void DisplayMenu();
private:
	void SetGame();
	//void PlayGame(Board board, Graphics GhBoard);
private:
	int convXpos(char primeX);
	int menu;
	int winner = -1;
	char inp_x;
	int inp_y;

};