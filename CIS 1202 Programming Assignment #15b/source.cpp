//Tyler Brown
//CIS 1202 502
//April 27, 2026

#include <iostream>
#include <cmath>

using namespace std;

template <class T>
T half(T);
int half(int);

int main()
{
}

template <class T>
T half(T num)
{
	return num / 2.0;
}

int half(int num)
{
	return round(static_cast<double>(num) / 2.0);
}