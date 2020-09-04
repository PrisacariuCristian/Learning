#include "lib/Timer.h"

#include <string.h>

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