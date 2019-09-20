#include <iostream>
#include <time.h>

using namespace std;
const int SIZE = 6;
int diceRoll(int diceArray[SIZE]);

int main()
{
	int i, dice[SIZE];
	diceRoll(dice);

	cout << " your rolls" << endl;
	for (i = 0; i < SIZE; i++)
	{
		cout << dice[i] << endl;
	}
	system("pause");
	return 0;
}

int diceRoll(int diceArray[SIZE])
{
	int i;
	srand(time(NULL)); // initializing the random number generator
	for (i = 0; i < SIZE; i++)
	{
		diceArray[i] = (rand() % 6) + 1;
	}
	return 0;
}