#include "King.h"
#include <iostream>

King::King(int color_) : Pieces(Pieces::King, color_)
{
	std::cout << " King(int color_)" <<std::endl;
}
