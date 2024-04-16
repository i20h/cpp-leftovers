#include <iostream>

using namespace std;

bool EvenOrOdd(int);

void main()
{
	unsigned int Value;
	cin >> Value;
	cout << EvenOrOdd(Value);
}

/*
True = 1 when Value % 2 = 0
False = 0 when Value % 2 != 0
*/
bool EvenOrOdd(int Value)
{
	return (Value % 2 == 0) ? true : false;
}
