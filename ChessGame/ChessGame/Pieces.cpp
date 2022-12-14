#include<iostream>
#include "Pieces.h"

Pieces::Pieces(Pieces& rhs)
{
	type = rhs.type;
	color = rhs.color;
}


Pieces& Pieces::operator=(const Pieces& rhs)
{
	this->type = rhs.type;
	this->color = rhs.color;
	return *this;
}

Pieces::Pieces(int type_, int color_) :type(type_), color(color_) {
		std::cout << "Pieces(int type_, int color_)" << std::endl;
	}

bool Pieces::MoveTo(int x, char y)
	{
		return false;
	}
bool Pieces::SelectTo(int, char y) 
{
	return false;
}