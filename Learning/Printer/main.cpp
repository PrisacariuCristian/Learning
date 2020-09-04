//#include "lib/Timer.h"
/*
//===== Main loop =====//
int main()
{
	DynamicArray array;

	for(int i = 0; i < 100; i++)
		array.insert(i);

	array.get_all();
	array.get(0);

	std::cin.get();
}
*/

#include "lib/Printer.h"
#include "lib/MathMini.h"

void test()
{
	Printer print;
	std::cout << print.power(3, 4) << std::endl;
}

int main()
{
	Vector2D<int> vector(1, 2);

	std::cout << vector.get_x() << std::endl;
	
	std::cin.get();
}
