#include <string>
#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int LengthAandC, int b, int valueAnglesAandC, int B) : Triangle(LengthAandC, b, LengthAandC, valueAnglesAandC, B, valueAnglesAandC) {
	name = "Равнобедренный треугольник";
}
