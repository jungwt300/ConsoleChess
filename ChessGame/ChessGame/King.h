#pragma once

#include "Pieces.h"
class King : public Pieces
{
public:
	King(int color_);
private:
	bool Castling = 0;
};