#include "Queen.h"
#include<iostream>
Queen::Queen(int color_) : Pieces(Pieces::Queen, color_)
{
	std::cout << "Queen(int color_, int type_)" << std::endl;
}
