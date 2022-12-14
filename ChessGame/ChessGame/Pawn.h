#pragma once

#include "Pieces.h"
class Pawn : public Pieces
{
public:
	Pawn(int color_);
	bool MoveTo(int x, int y);
private:
	bool foward = 0;
};