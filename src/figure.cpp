#include <iostream>
#include "figure.h"

namespace figure
{
	void Figure::setParameters(int val1, int val2)
	{
		a = val1;
		b = val2;
	}

	void Figure::setP(int val1)
	{
		P = val1;
	}

	void Figure::setS(int val1)
	{
		S = val1;
	}

	void Figure::getParameters() const
	{
		setlocale(LC_ALL, "ru");
		std::cout << "сторона a = " << a << "; сторона b = " << b << std::endl;
	}

	int Figure::getA() const
	{
		return a;
	}

	int Figure::getB() const
	{
		return b;
	}

	int Figure::getP() const
	{
		return P;
	}

	int Figure::getS() const
	{
		return S;
	}
}

namespace point
{
	int Point::getX() const
	{
		return x;
	}

	int Point::getY() const
	{
		return y;
	}
}
