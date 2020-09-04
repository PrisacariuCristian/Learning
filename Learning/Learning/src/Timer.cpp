#include "../lib/Timer.h"

//////////////////////////////////////////
//===== Timer class implementation =====//
//////////////////////////////////////////

Timer::Timer()
{
	start = std::chrono::steady_clock::now();
}

Timer::~Timer()
{
	finish = std::chrono::steady_clock::now();

	duration = finish - start;

	std::cout << "TIMER: " << duration.count() * 1000.0f << " milisec. \n";
}

/////////////////////////////////////////////////
//===== DYnamicArray class implementation =====//
/////////////////////////////////////////////////

DynamicArray::DynamicArray()
{

}

void DynamicArray::resize()
{

}

void DynamicArray::insert(int item)
{

}

int * DynamicArray::get_all()
{
	return nullptr;
}

int DynamicArray::get(int index)
{
	return 0;
}

DynamicArray::~DynamicArray()
{

}
