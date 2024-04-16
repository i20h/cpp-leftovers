#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void BubbleSort(int *, int);
void PrintTab(int*, int);

int main()
{
	int tab[10]{};
	srand(time(NULL));
	int tabSize = sizeof(tab) / sizeof(tab[0]);

	for (int i = 0; i < tabSize; i++)
		tab[i] = rand() % 15 + 1;

	cout << "Original table" << endl;
	PrintTab(tab, tabSize);
	BubbleSort(tab, tabSize);
	cout << "Bubble Sort" << endl;
	PrintTab(tab, tabSize);
	return 0;
}

void BubbleSort(int* tab, int tabSize)
{
	for (int i = 0; i < tabSize - 1; i++)
		for (int j = 0; j < tabSize - i - 1; j++)
			if (tab[j] > tab[j + 1]) 
				swap(tab[j], tab[j + 1]);
}

void PrintTab(int* tab , int tabSize)
{
	for (int i = 0; i < tabSize - 1; i++)
		cout << "\t" << tab[i] << endl;
}
