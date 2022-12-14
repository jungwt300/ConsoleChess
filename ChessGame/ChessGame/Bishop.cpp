#include "Bishop.h"
#include <iostream>

Bishop::Bishop(int color_): Pieces(Pieces::BIshop, color_)
{
	std::cout << "Bishop(int color_)" << std::endl;
}
