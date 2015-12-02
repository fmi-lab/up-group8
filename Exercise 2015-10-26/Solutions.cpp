#include <iostream>
using namespace std;
// Task 1
/*
int main()
{
	int start, end; 
	cout << "enter start: "; 
	cin >> start;
	cout << endl;
	cout << "enter end: ";
	cin >> end;
	cout << endl;
	for (int i = start; i <= end; i++)
	{
		if (i % 3 == 0)
			cout << i << endl;
	}
	return 0;
}*/
// Task 2
/*
int main()
{
	int number;
	cout << "enter number: ";
	cin >> number;
	int maxDigit = number % 10;
	while (number != 0)
	{
		if (maxDigit < number % 10)
			maxDigit = number % 10;
		number /= 10;
	}
	cout << maxDigit << endl;
	return 0;
}*/
// Task 3
/*
int main()
{
	int number;
	cout << "enter number: ";
	cin >> number;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			cout << i << endl;
	}
	return 0;
}*/
//Task 4
/*
int main()
{
	char symbol;
	do
	{
		cout << "Enter symbol: ";
		cin >> symbol;
	} while (symbol != '!');
	return 0;
}*/
//Task 5a
/*
int main()
{
	int currentNumber, sum = 0;

	while (sum < 100)
	{
		cout << "Enter number: ";
		cin >> currentNumber;
		if (currentNumber < 30)
		{
			sum += currentNumber;
		}
	}

	cout << "The sum has reached or exceeded 100!" << endl;

	return 0;
}*/
//Task 5b
/*
int main()
{
	int currentNumber, sum = 0;

	while (sum < 100)
	{
		cout << "Enter number: ";
		cin >> currentNumber;
		sum += currentNumber;
	}

	cout << "The sum has reached or exceeded 100!" << endl;

	return 0;
}*/
//Task6
/*
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;

	if (n < 0 || n > 9999)
	{
		cout << "Too big number!" << endl;
	}

	else
	{
		int sum = 0;
		for (int i = 0; i <= n; ++i)
		{
			sum += i*i;
		}
		cout << "The sum of squares is " << sum << "." << endl;
	}

	return 0;
}*/
//Task 6b
/*
int main()
{
	int n;
	cin >> n;
	if (n < 0 || n > 9999)
	{
		cout << "Too big number!" << endl;
	}
	else
	{
		cout << "All even numbers in [0, " << n << "] are:" << endl;
		for (int i = 0; i <= n; ++i)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}

	return 0;
}*/

//Task 7
/*
int main()
{
	int number, index;
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter index of digit: ";
	cin >> index;
	int cpyNumber = number;
	int counter = 0;
	while (number != 0)
	{
		counter++;		
		if (counter == index)
		{
			if (number % 2 == 0)
				cout << "even " << endl;
			else
				cout << "odd " << endl;
			break;
		}
		number /= 10;
	}
	return 0;
}*/





