#pragma once

///////////////////////////////////////
//===== Vector 3D template class ====//
///////////////////////////////////////

template <typename T>
class Vector3D
{

private:
	T x, y, z;

public:
	Vector3D();
	Vector3D(T x, T y, T z);

	T get_x();
	T get_y();
	T get_z();

	~Vector3D();

};

///////////////////////////////////////
//===== Matrix 3D template class ====//
///////////////////////////////////////

template <class T>
class Matrix3D
{
private:
	Vector3D<T> x;
	Vector3D<T> y;
	Vector3D<T> z;
public:
	Matrix3D();
	Matrix3D(T first_row_x, T first_row_y, T first_row_z,
			 T second_row_x, T second_row_y, T second_row_z,
			 T third_row_x, T third_row_y, T third_row_z);

	Vector3D<T> get_vector_x();
	Vector3D<T> get_vector_y();
	Vector3D<T> get_vector_z();

	~Matrix3D();
};



//===== TEMPLATE DEFINITIONS =====//



//////////////////////////////////////////////
//===== Vector 3d Template declaretions ====//
//////////////////////////////////////////////

template <typename T>
Vector3D<T>::~Vector3D()
{

}

template <typename T>
T Vector3D<T>::get_z()
{
	return z;
}

template <typename T>
T Vector3D<T>::get_y()
{
	return y;
}

template <typename T>
T Vector3D<T>::get_x()
{
	return x;
}

template <typename T>
Vector3D<T>::Vector3D(T x, T y, T z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

template <typename T>
Vector3D<T>::Vector3D()
{

}

//////////////////////////////////////////////
//===== Matrix 3d Template declaretions ====//
//////////////////////////////////////////////

template <class T>
Matrix3D<T>::~Matrix3D()
{

}

template <class T>
Vector3D<T> Matrix3D<T>::get_vector_z()
{
	return z;
}

template <class T>
Vector3D<T> Matrix3D<T>::get_vector_y()
{
	return y;
}

template <class T>
Vector3D<T> Matrix3D<T>::get_vector_x()
{
	return x;
}

template <class T>
Matrix3D<T>::Matrix3D(T first_row_x, T first_row_y, T first_row_z,
					  T second_row_x, T second_row_y, T second_row_z,
					  T third_row_x, T third_row_y, T third_row_z)
{
	Vector3D<T> first_row(first_row_x, first_row_y, first_row_z);
	Vector3D<T> second_row(second_row_x, second_row_y, second_row_z);
	Vector3D<T> third_row(third_row_x, third_row_y, third_row_z);
	
	x = first_row;
	y = second_row;
	z = third_row;
}

template <class T>
Matrix3D<T>::Matrix3D()
{

}