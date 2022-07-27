#include <string>
#include "Parallelogram.h"

Parallelogram::Parallelogram(int LengthAandC, int LengthBandD, int AnglesAandC, int AnglesBandD) : Quadrilateral(LengthAandC, LengthBandD, LengthAandC, LengthBandD, AnglesAandC, AnglesBandD, AnglesAandC, AnglesBandD) {
	name = "Параллелограмм";
}