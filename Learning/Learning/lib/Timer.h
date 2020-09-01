#pragma once

#include <iostream>
#include <chrono>

//////////////////////////
//===== Timer class ====//
//////////////////////////

class Timer
{
public:
	Timer();

	~Timer();
private:
	std::chrono::time_point<std::chrono::steady_clock> start, finish;
	std::chrono::duration<float> duration;
};

//////////////////////////////////
//===== DynamicArray class =====//
//////////////////////////////////

class DynamicArray
{
public:
	//This constructor should be responsible for allocating 
	//heap memory for the int array, it should be the default capacity
	//size initially
	DynamicArray();

	//This function will take care to check if there is any need to
	//resize, if so, it will create a new temporary array of a bigger size
	//then it will copy over it the old array items, then it will delete the old 
	//array, then it will point to the temporary array
	void resize();

	//This function will insert one int at a time, will increment size by 1 each time
	void insert(int item);

	//Simply return the array itself
	int * get_all();

	//Return one int at given index if it exists
	int get(int index);

	//Don't forget to clear the heap memory allocated for the array
	~DynamicArray();

private:
	const unsigned int default_capacity = 4;
	unsigned int capacity;
	unsigned int size = 0;

	int * array;
};