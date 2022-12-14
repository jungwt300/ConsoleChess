#include "Knight.h"
#include <iostream>

Knight::Knight(int color_) : Pieces(Pieces::Knight, color_) {
	std::cout << "Knight(int color_, int type_)" << std::endl;
}