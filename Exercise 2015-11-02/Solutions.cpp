#include <iostream>
using namespace std;
/* Task 1
int greatestCommonDivisor(int x, int y)
{
	while (x != y)
		if (x >= y) 
			x = x - y; 
		else 
			y = y - x;
	return x;
}*/

/* Task2
bool isDevidedByThree(int x)
{
	int sum = 0;
	while (x != 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum % 3 == 0;
}*/

/*Task 3
int changeDigit(int number, int replaceDigit, int newDigit)
{
	int result = 0;
	int cpyNumber = number;
	int j = 1;
	while (cpyNumber != 0)
	{
		if (cpyNumber % 10 == replaceDigit)
			result += newDigit*j;
		else
			result += (cpyNumber % 10)*j;
		j *= 10;
		cpyNumber /= 10;
	}
	return result;
}*/

/*Task 1
int main()
{
	int a[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int minElement = a[0], maxElement = a[0];

	for (int i = 1; i < n; ++i)
	{
		if (a[i] < minElement) minElement = a[i];

		if (a[i] > maxElement) maxElement = a[i];
	}

	int secondMin = maxElement; //всички елементи са по-малки или равни на най-големия,
	//така че коректно ще намерим на-малкия от тях
	int secondMax = minElement; //аналогично, както за втория най-малък

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < secondMin && a[i] != minElement) secondMin = a[i];
		if (a[i] > secondMax && a[i] != maxElement) secondMax = a[i];
	}

	cout << "Greatest element: " << maxElement << endl;
	cout << "Second greatest: " << secondMax << endl;
	cout << "Smallest element: " << minElement << endl;
	cout << "Second smallest: " << secondMin << endl;

	return 0;
}*/

/*Task 2
int main()
{
	int a[1000];

	int n;
	cout << "Enter number of elements in array: ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << "enter arr[" << i << "]: ";
		cin >> a[i];
	}

	int numberToFind, numberOccurencesCount = 0;
	cout << "Which number do you want to search for?" << endl;
	cin >> numberToFind;

	cout << "Number " << numberToFind << " is found on indexes: " << endl;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == numberToFind)
		{
			++numberOccurencesCount;
			cout << i << endl;
		}
	}

	cout << numberOccurencesCount << " time(s) total." << endl;

	return 0;
}*/

/*Task 3
int main()
{
	double a[1000];

	int n;
	cin >> n;

	double sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		sum += a[i]; //определяме сумата на елементите едновременно с въвеждането им
	}

	double average = sum / n;
	cout << "The average value of the array is " << average << " ." << endl;

	double closestToAverage = a[0];
	double smallestDifference = fabs(average - a[0]);

	for (int i = 1; i < n; ++i)
	{
		if (fabs(average - a[i]) < smallestDifference)
		{
			smallestDifference = fabs(average - a[i]);
			closestToAverage = a[i];
		}
	}

	cout << "Closest to the average value is : " << closestToAverage << " ." << endl;

	double smallerThanAverage[1000];
	double greaterOrEqualToAverage[1000];

	int smIndex = 0; //индекс на текущия последен елемент в масива с по-малките от средноаритметиното
	int grEqIndex = 0; //индекс на текущия последен елемент в масива с >= от средноаритметичното елементи

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < average)
		{
			smallerThanAverage[smIndex] = a[i];
			++smIndex;
		}
		else
		{
			greaterOrEqualToAverage[grEqIndex] = a[i];
			++grEqIndex;
		}
	}

	cout << "Smaller than the average value are:" << endl;

	for (int i = 0; i < smIndex; ++i)
	{
		cout << smallerThanAverage[i] << ' ';
	}

	cout << endl;

	cout << "Equal to or greater than the average value are:" << endl;

	for (int i = 0; i < grEqIndex; ++i)
	{
		cout << greaterOrEqualToAverage[i] << ' ';
	}

	cout << endl;

	return 0;
}*/

/*Task 4
int main()
{
	int a[1000];

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int halfArrayCount = n / 2;

	bool specular = true; //флаг дали масивът е огледален

	for (int i = 0; i <= halfArrayCount; ++i)
	{
		if (a[i] != a[n - i - 1])
		{
			specular = false;
			break;
		}

	}

	cout << "The array is" << (specular ? " " : " NOT ") << "specular by it's middle." << endl;

	return 0;
}*/

/*Task 5
void bubbleSort(int arr[], int length)
{
	bool isNotSorted = true;
	while (isNotSorted)
	{
		isNotSorted = false;
		for (size_t i = 0; i < length - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				isNotSorted = true;
			}
		}
	}
}*/

/*Task 6
void selectionSort(int arr[], int length) 
{
	for (int i = 0; i < length - 1; i++) 
	{
		int minIndex = i;
		for (int j = i + 1; j < length; j++)
			if (arr[j] < arr[minIndex])
				minIndex = j;
		
		int tmp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = tmp;
		
	}
}*/

int main()
{
	int arr[5] = {31, 26, 13, 7, 11};
	//selectionSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << "arr[" << i << "]: " << arr[i] << endl;
	}
	return 0;
}


