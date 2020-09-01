#pragma once

#include <iostream>
#include <chrono>

class Timer
{
public:
	Timer();
	Timer(Timer const &);

	~Timer();
private:
	std::chrono::time_point<std::chrono::steady_clock> start, finish;
	std::chrono::duration<float> duration;

	int a;
	int * b;
};
