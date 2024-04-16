#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> VectorPrimeNumber(int);

void main()
{
	int MaxValuesToCheck;
	cout << "Set the max to check all the prime number from 1 to your value" << endl;
	cin >> MaxValuesToCheck;
	if (MaxValuesToCheck <= 0)
		return;
	vector<int> PrimeNumberList = VectorPrimeNumber(MaxValuesToCheck);
	for (auto i : PrimeNumberList)
		cout << i << endl;
}

vector<int> VectorPrimeNumber(int MaxValuesToCheck)
{
	vector<int> PrimeNumber;

	for (int i = 2; i <= MaxValuesToCheck; ++i)
	{
		bool IsPrime = true;
		if (!((i != 2) && (i % 2 == 0)))
		{
			int MaxSqrt = sqrt(i);

			for (int j = 2; j <= MaxSqrt; j++)
			{
				if (i % j == 0)
				{
					IsPrime = false;
					break;
				}

			}
			if (IsPrime)
				PrimeNumber.push_back(i);
		}
	}
	return PrimeNumber;
}