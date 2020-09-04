#include "../lib/Printer.h"

Printer::Printer()
{
	std::cout << "am creat clasa " << std::endl;
}

int Printer::bigger(int a, int b)
{
	return a * (a > b) + b * (a < b);
}

int Printer::power(int a, int b)
{
	int c = 1;

	if (b == 0)
		return 1;

	for (int i = 0; i < b; i++)
		c = a * c;

	return c;
}

Printer::~Printer()
{
	std::cout << "am distrus clasa " << std::endl;
}
