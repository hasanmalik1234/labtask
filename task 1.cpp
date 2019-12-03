

#include<iostream>
using namespace std;
int sum(int x);
int main()
{
	int x;
	cout << "Enter a positive integer: ";
	cin >> x;
	cout << "Sum =  " << sum(x);
	return 0;
}
int sum(int x)
{
	if (x != 0)
		return x + sum(x - 1);
	return 0;
}