#include <iostream>
#include "Pawn.h"

Pawn::Pawn(int color_) : Pieces(Pieces::Pawn, color_) {
		std::cout << "Pawn(int color_, int type_)" << std::endl;
		foward = 0;
	}

bool Pawn::MoveTo(int x, int y)
{
	
	if (foward == 0) {
		
	}
	else
	return false;
}
