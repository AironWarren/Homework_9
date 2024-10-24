// Homework_9.cpp: определяет точку входа для приложения.
//

#include "main.h"
#include "operations.h"

using namespace std;

int main()
{
	figure::Figure kv1, kv2;

	outsideWithOperations::read(kv1);
	outsideWithOperations::read(kv2);

	outsideWithOperations::show(mathOperations::per(kv1));
	outsideWithOperations::show(mathOperations::per(kv2));

	outsideWithOperations::show(mathOperations::sq(kv1));
	outsideWithOperations::show(mathOperations::sq(kv2));

	outsideWithOperations::show(outsideWithOperations::comparisson(kv1, kv2));

	point::Point k, l(4, 39);

	std::cout << mathOperations::rasst(k, l);
	
	
	return 0;
}
