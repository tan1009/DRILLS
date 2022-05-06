#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
void swap_v(T a, T b) //swap by value - won't change original parameters
{
	int temp = a;
	a = b;
	b = temp;
}

template<typename T>
void swap_r(T& a, T& b)//swap by reference - going to affect the parameter's value
{
	int temp = a;
	a = b;
	b = temp;
}

template<typename T>
void swap_cr(const T& a, const T& b) //swap by reference for constants - going to change parameter's value
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int x = 7;
	int y = 9;
	swap_v(x, y);
	swap_r(x, y);

	const int cx = 7;
	const int cy = 9;

	swap_cr(cx, cy);
	swap_v(7.7, 9.9);

	double dx = 7.7;
	double dy = 9.9;
	swap_r(dx, dy);

	return 0;
}
