#pragma once

template <typename T>
class Vector2D
{
public:
	Vector2D() {};
	Vector2D(T x, T y);
	
	T get_x();
	T get_y();

private:
	T x, y;
};

template<typename T>
Vector2D<T>::Vector2D(T x, T y)
{
	this->x = x;
	this->y = y;
}

template <typename T>
T Vector2D<T>::get_x()
{
	return x;
}

template <typename T>
T Vector2D<T>::get_y()
{
	return y;
}

//===== TEMA =====//

template <class T>
class Matrix2D
{

};