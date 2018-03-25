#include <iostream>
#include<ctime>
using namespace std;
int rolldice(int numberofDice)
{
	static int count = 0;
	int result = 0;
	for (int i = 0; i < numberofDice; i++)
	{
		srand(time(0));
		result += rand() % 6 + 1;
		count++;
	}
	cout << "You have rolled " << count << "times " << endl;
	return result;
}
int main()
{
	double value = 0;
	double result = 0;
	double score = 0;
	int dices = 0;
	while (result < 50)
	{
		cout << "The goal is a score of: 50" << endl;
		cout << "Your current running score is: " << score << endl;
		cout << "How many dices woudld you like to roll (0,1,2): ";
		cin >> dices;
		value = rolldice(dices);
		cout << "The result of your roll is " << value << endl;
		
		/*if (dices == 1)
		{
			cout << "The result of the current roll is: " << value << endl;
			score += value;
		}
		else if (dices == 2)
		{
			cout << "The result of the current roll is: " << value + value2  << endl;
			score += value + value2;
		}
		else if (dices == 0)
		{
			cout << "Nothing" << endl;
		
		}
		else
			break;
		*/
		result += value;
		cout << result << endl;
		
	}
	cout << "Game Over" << endl;
	cout << result << endl;

}
