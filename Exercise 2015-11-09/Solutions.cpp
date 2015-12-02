#include <iostream>
using namespace std;
//Task 1
bool differentDigits(int n)
{
int tmp = number, copy, digit;
while (tmp != 0){
	copy = tmp / 10;
	digit = tmp % 10;
	while (copy != 0){
		if (digit == copy % 10){
			return false;
		}
		else
			copy /= 10;
	}
	tmp /= 10;
}
return true;
}

//Task 2
void makeNumbers()
{
	for (int i = 1; i < 10; i++)
		for (int j = 1; j < 10; j++)
			for (int k = 1; k < 10; k++)
			{
				int number = k * 1 + j * 10 + i * 100;
				if (differentDigits(number))
					cout << number << " ";
				/*if (i != j && i != k && k != j)
					cout << i << j << k << " ";*/
			}
}

//Task 3 

bool isPrime(int n)
{
	if (n < 2)
		return true;

	for (int i = 2; i < n; i++)
	{
		if (n% i == 0)
			return false;
	}
	return true;
}

bool twinPrimes(int a, int b)
{

	return ((a - b == 2 || b - a == 2) && isPrime(a) && isPrime(b));
}

//Task 4

/*bool thereIsDigitOne(int n)
{
	bool flag = false;
	while (n != 0)
	{
		if (n % 10 == 1)
		{
			flag = true;
			break;
		}
		n /= 10;
	}
	return flag;
}


int main()
{
	for (int i = 1; i < 20; i++)
	{
		if (isPrime(i) && thereIsDigitOne(i))
			cout << i << endl;
	}
	
	return 0;
}*/

//Task 5
void makeMatrix(int n, int m)
{
	int matrix[100][100];

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (i == j) matrix[i][j] = i;

			if (i < j) matrix[i][j] = j - i;

			if (i > j) matrix[i][j] = i * j;
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}


//Task 6
int sum(int matrix[][10], int n){
	int sum = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{

			if ((i + j == (n - 1)) && matrix[i][j] % n == 0)
			{
				sum += matrix[i][j];
			}

		}
	}
	return sum;
}

//Task 7
bool findPositiveElement(int matrix[][10], int n){
	bool found = false;
	int number;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{

			if (i == j && matrix[i][j] >= 0)
			{
				number = i;
				found = true;
				break;
			}

		}
		if (found)
		{
			break;
		}
	}
	return found;
}

//Task 8
void printMatrix(int a[][10], int n){
	int k = 0, i = 0;
	//first way
	//for (k = 0; k <n; k++)
	//{
	//	for ( i = k; i>=0; i--)
	//	{
	//		cout << a[i][k - i];
	//	}
	//}
	//for (k = n; k <=2*n-2; k++)
	//{
	//	for (i = n-1; i >= k-n+1; i--)
	//	{
	//		cout << a[i][k - i];
	//	}
	//}

	//second way
	for (k = n - 1; k >= 0; k--)
	{
		for (i = k; i <= n - 1; i++)
		{
			cout << a[i][i - k];
		}
	}
	for (k = -1; k >= 1 - n; k--)
	{
		for (i = 0; i <= n + k - 1; i++)
		{
			cout << a[i][i - k];
		}
	}
}
//Task 9 
int main()
{
	int matrix[100][100];
	int n;
	cout << "Enter n: ";
	cin >> n;
	for (int i = 0; i <  n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "matrix[" << i <<"][" << j <<"]: ";
			cin >> matrix[i][j];
		}
	}

	int sum = 0; int productBelow = 1 ; int productUpon = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i < j)
			{
				if (isPrime(matrix[i][j]))
					sum += matrix[i][j];
			}
			// product below second diagonal
			if (i > n - j - 1)
			{
				productBelow *= matrix[i][j];
			}
			// product upon
			if (i < n - j - 1)
			{
				productUpon *= matrix[i][j];
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << matrix[i][j] << " ";			
		}
		cout << endl;
	}
	cout << "Sum: " << sum << endl;
	cout << "Product below second diagonal: " << productBelow<< endl;
	cout << "Product upon second diagonal " << productUpon << endl;
	return 0;
}
