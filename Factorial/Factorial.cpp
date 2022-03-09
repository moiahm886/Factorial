#include<iostream>
using namespace std;
int number = 1;
int factorial(int x)
{
	if (x == 1)return number;
	else
	{
		number *= x;
		return factorial(x - 1);
	}
}
int main()
{
	cout << factorial(5) << endl;
}