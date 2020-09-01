#include "../lib/Timer.h"

Timer::Timer()
{
	start = std::chrono::steady_clock::now();
}

Timer::Timer(Timer const & other)
{
	a = other.a;
	b = new int[2];

	memcpy(b, other.b, 2 * sizeof(int));
}

Timer::~Timer()
{
	finish = std::chrono::steady_clock::now();

	duration = finish - start;

	std::cout << "TIMER: " << duration.count() * 1000.0f << " milisec. \n";
}
