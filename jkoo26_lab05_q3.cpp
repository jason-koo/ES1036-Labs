#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int rolldice(int result)
{
	srand(time(0));
	int x;
	x = rand() % 6 + 1;
	return x;
}
int main()
{
	int result = 0;
	int value;
	int score = 0;
	int count = 0;
	char choice = 'y';
	while (score < 25)
	{
		cout << "The goal is a score of: 25" << endl;
		cout << endl;
		cout << "Your current running score is: " << score << endl;
		cout << "Would you like to roll the die? (y/n): ";
		cin >> choice;
		value = rolldice(result);
		if (choice == 'y')
			cout << "The result of the current roll is: " << value << endl;
		else
			break;
		score += value;

	}
	cout << "Game Over" << endl;
	if (score > 25)
		cout << "You rolled too many!" << endl;
	else if (score <= 25)
		cout << "Your score was: " << score << endl;
	else
	cout << "Your current running score is: " << score << endl;

		
		
}