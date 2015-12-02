#include <iostream>

using namespace std;


int findFirstWithCertainValue(int a[], int size, int value)
{
	

	int firstOccurance = NULL;

	int mid, left = 0, right = size - 1;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (a[mid]== value)
		{
			firstOccurance = mid;
			break;
		}

		else if (value < a[mid])
		{
			right = mid;
		}

		else
		{
			left = mid;
		}
	}

	return firstOccurance;
}

int main()
{
	int a[] = {-1, -1, 1, 2, 3, 4, 5};

	cout << findFirstWithCertainValue(a, 7, 4) << endl;

	return 0;
}
