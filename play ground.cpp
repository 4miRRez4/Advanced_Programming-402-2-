#include <iostream>
using namespace std;

void f(int x, int& y)
{
	int i = 5;
	x = i + 1;
	return;
	y = 18;
}

int main()
{
	int a = 10;
	int b = 11;			
	cout << a << endl;
	cout << b << endl;



	return 0;
}