#include <iostream>
#include <string>
using namespace std;
//Declare function so that is able to be called within another function
double computeFactorial(int number);
//Functions
void printHeader(string name, int lab, string date, int question)
{
	name = "Jason Koo";
	lab = 5;
	date = "March 12, 2018";
	question = 2;
}

void displaymenu()
{
	
	cout << "a. Power Function" << endl;
	cout << "b. Sine Function" << endl;
	cout << "c. Exponential Function" << endl;
	cout << "d. Factorial Function" << endl;
	cout << "e. Exit" << endl;

}
double computePower(double base, int exponent)
{

	if (exponent == 0) return 1;
	return base*computePower(base, exponent - 1);
}


double computeSine(double rad, int numberOfIterations)
{
	double result = 0.0;
	for (int n = 0; n < numberOfIterations; n++) {
		double equ1 = computePower(-1, n);
		double equ2 = computePower(rad, 2 * n + 1);
		double equ3 = computeFactorial(2 * n + 1);
		result += equ1*equ2 / equ3;
	}
	return result;
}


double computeExponential(double exponential, int numberOfIterations)
{
	double result = 0;
	for (int p = 0; p < numberOfIterations; p++)
	{
		double equ1 = computePower(exponential, p);
		double equ2 = computeFactorial(p);
		result += equ1 / equ2;
	}
	return result;
}
double computeFactorial(int number)
{
	double result = 1.0;
	while (number > 0) {
		result *= number;
		number--;
	}
	return result;
}
//Main function
int main()
{
	char choice = 'a';
	//do while to switch statment too choose menu options
	do {
		displaymenu();
		cout << "Please enter choice (a-e)";
		cin >> choice;

		switch (choice)
		{
		case ('a'):
		{
			double base, exponent;
			cout << "Please enter a real number base: ";
			cin >> base;
			cout << "Please enter an integer exponent: ";
			cin >> exponent;
			cout << "The result is " << computePower(base, exponent) << endl;
			break;
		}
		case('b'):
		{
			double radians;
			int numberOfIterations;
			cout << "Please enter a number in radians: ";
			cin >> radians;
			cout << "Please enter the number of iterations: ";
			cin >> numberOfIterations;
		
			cout << "The result is " << computeSine(radians, numberOfIterations) << endl;
			break;
		}
		case ('c'):
		{
			double base;
			int numberOfIterations;
			cout << "Please enter a number for the exponential: ";
			cin >> base;
			cout << "Please enter the number of iterations: ";
			cin >> numberOfIterations;
			cout << "The result is " << computeExponential(base, numberOfIterations) << endl;
			break;
		}
		case ('d'):
		{
			int integer;
			cout << "Please enter a postive integer: ";
			cin >> integer;
			cout << "The result is " << computeFactorial(integer) << endl;
			break;
		}
		default:
			break;
		}

	}
		while (choice != 'e');

	cout << "Goodbye" << endl;
	



	}