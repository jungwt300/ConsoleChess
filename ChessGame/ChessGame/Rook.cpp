#include "Rook.h"
#include<iostream>
Rook::Rook(int color_) : Pieces(Pieces::Rook, color_)
{
	std::cout << "Rook(int color_, int type_)" << std::endl;
}
