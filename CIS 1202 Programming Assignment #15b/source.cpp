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
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << "Expected 3.5, 2.5 and 2" << endl;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
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