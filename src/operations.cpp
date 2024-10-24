#include <iostream>
#include <cmath>
#include "operations.h"


namespace mathOperations
{
	int per(figure::Figure& figure)
	{
		figure.setP(2 * (figure.getA() + figure.getB()));
		return 2 * (figure.getA() + figure.getB());
	}

	int sq(figure::Figure& figure)
	{
		figure.setS(figure.getA() * figure.getB());
		return figure.getA() * figure.getB();
	}

	double rasst(point::Point one, point::Point two)
	{
		
		return sqrt(pow((two.getX() - one.getX()), 2) + pow((two.getY() - one.getY()), 2));
	}
}

namespace outsideWithOperations
{
	void read(figure::Figure& figure)
	{
		setlocale(LC_ALL, "ru");

		int val1, val2;

		std::cout << "¬ведите 2 сторы фигуры: ";
		std::cin >> val1 >> val2;
		std::cout << std::endl;

		if (val1 < 0) {
			val1 = 0;
		} else if (val2 < 0) {
			val2 = 0;
		}
			

		figure.setParameters(val1, val2);
	}

	void show(int data)
	{
		std::cout << data << std::endl;
	}

	void show(double data)
	{
		std::cout << data << std::endl;
	}

	double comparisson(figure::Figure figure1, figure::Figure figure2)
	{
		std::cout << figure1.getS() << std::endl;
		std::cout << figure2.getP() << std::endl;
		return double(figure1.getS()) / figure2.getP();
	}
}