// tower of hanoi problem

#pragma once
#include "HSLAPixel.h"

namespace uiuc {
	class Cube {
	public:
		Cube(double length, HSLAPixel color);

		double getLength() const;
		void setLength(double length);

		double getVolume() const;
		double getSurfaceArea() const;

	private:
		double length_;
		HSLAPixel color_;

	};
}