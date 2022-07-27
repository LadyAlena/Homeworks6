#include "Parallelogram.h"
#include "Rhomb.h"

Rhomb::Rhomb(int LengthSides, int AnglesAandC, int AnglesBandD) : Parallelogram(LengthSides, LengthSides, AnglesAandC, AnglesBandD) {
	name = "Ромб";
}