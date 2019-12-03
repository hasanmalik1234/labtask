
#include <iostream>
#include <math.h>
using namespace std;
int Power(int, int);
int main()
{
	int x, y, z;
	cout << "Enter base: ";
	cin >> x;
	cout << "Enter Exponent: ";
	cin >> y;
	z = Power(x, y);
	cout << x << "^" << y << " = " << z;
	return 0;
}
int Power(int x, int y)
{
	if (y != 0)
		return pow(x,y);
	else
		return 0;
}