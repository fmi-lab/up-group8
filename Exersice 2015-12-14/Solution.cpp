#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

//Task 1
bool isPrime(int number)
{
	bool prime = true;

	for (int i = 2; i <= floor(sqrt(number)); ++i)
	{
		if (number % i == 0)
		{
			prime = false;
			break;
		}
	}

	return prime;
}

bool isPerfect(int number)
{
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}

	return sum == number;
}

bool isPrimeMoreThanPerfect(int arr[], int size)
{
	int counterPrime = 0;
	int counterPerfect = 0;
	for (int i = 0; i < size; i++)
	{
		if (isPrime(arr[i]))
			counterPrime++;
		if (isPerfect(arr[i]))
			counterPerfect++;
	}
	if (counterPrime > counterPerfect)
		return true;
	else
		return false;
}
/*
int main()
{
int arr[] = { 4, 6, 28 };
int arr2[] = { 1, 2, 3, 6, 28 };
cout << isPrimeMoreThanPerfect(arr, 3) << endl;
cout << isPrimeMoreThanPerfect(arr2, 5) << endl;


return 0;
}*/

//Task 2

void findDuplicate(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		bool foundBefore = false;
		bool foundAfer = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				foundBefore = true;
				break;
			}
		}
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] == arr[i])
			{
				foundAfer = true;
				break;
			}
		}
		if (foundAfer && (!foundBefore))
			cout << arr[i] << endl;
	}
}

/*
int main()
{
int arr[] = { 2, 7, 2, 3, 3, 4, 2 };
findDuplicate(arr, 7);

return 0;
}*/

//task 3

int main()
{
	//int firstArray[] = { 1, 1, 1};
	//int firstArrayCount = 3;
	//int secondArray[] = { 1, 1, 1, 1, 1, 1 };
	//int secondArrayCount = 6;

	int firstArray[] = { 1, 2, 3 };
	int firstArrayCount = 3;
	int secondArray[] = { 2, 1, 2, 3, 4, 5, 1, 2, 3, 1, 2 };
	int secondArrayCount = 11;

	int counter = 0;
	if (firstArrayCount <= secondArrayCount)
	{
		for (int i = 0; i <= secondArrayCount - firstArrayCount; i++)
		{
			int j = -1;
			do
			{
				j++;
			} while (firstArray[j] == secondArray[j + 1] && j < firstArrayCount - 1);
			if (firstArray[j] == secondArray[j + i])
				counter++;
		}
	}

	cout << "Reapet " << counter << " times" << endl;

	return 0;
}

//Task 4
//const int MAX_SIZE = 20;
//
//void readMatrix(int k, int matrix[][20])
//{
//	for (int i = 0; i < k; i++)
//	for (int j = 0; j < k; j++)
//	{
//		cout << "enter [" << i << "][" << j << "]: ";
//		cin >> matrix[i][j];
//	}
//}
//
//void printMatrix(int k, int matrix[][20])
//{
//	for (int i = 0; i < k; i++)
//	{
//		for (int j = 0; j < k; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//bool Zeros(int k, int x[])
//{
//	int i = -1;
//	do
//	{
//		i++;
//	} while ((x[i] != 0 || x[i + 1] != 0) && i < k - 2);
//	return x[i] == 0 && x[i + 1] == 0;
//}
//
//int main()
//{
//	int n;
//	cout << "enter n ";
//	cin >> n;
//	cout << "enter element of matrix";
//	int a[MAX_SIZE][MAX_SIZE];
//	readMatrix(n, a);
//	cout << "matrix: ";
//	printMatrix(n, a);
//
//	for (int i = 0; i < n; i++){
//
//		if (Zeros(n, a[i])){
//			cout << i << endl;
//		}
//	}
//	return 0;
//}

//Task 5-page 261 task 55-soritrane na chetnite nizhodqshto na nechetnite vuzhodqshto
//const int MAX_SIZE = 20;
//void sortAsc(int arr[], int n){//sortirane vuzhodqshto
//	int i, j, minI;
//	for (size_t i = 0; i < n; i++)
//	{
//		minI = i;
//		for (size_t j = i + 1; j <n; j++)
//		{
//			if (arr[minI] > arr[j])
//				minI = j;
//		}
//		if (minI != i)
//		{
//			int t = arr[minI];
//			arr[minI] = arr[i];
//			arr[i] = t;
//		}
//	}
//}
//void sortDesc(int arr[], int n){//sortirane nizhodqshto
//	int i, j, maxI;
//	for (size_t i = 0; i < n; i++)
//	{
//		maxI = i;
//		for (size_t j = i + 1; j < n; j++)
//		{
//			if (arr[maxI] < arr[j])
//				maxI = j;
//		}
//		if (maxI != i)
//		{
//			int t = arr[maxI];
//			arr[maxI] = arr[i];
//			arr[i] = t;
//		}
//	}
//}
//void print(int arr[][MAX_SIZE], int n, int m){
//	int i, j;
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			cout << setw(5) << arr[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int main(){
//	int arr[MAX_SIZE][MAX_SIZE] =
//	{
//		{ 2, 14, 5, 2, 3, 5 },
//		{ 2, 1, 4, 5, 2, 4 },
//		{ 6, 5, 3, 4, 2, 5 },
//		{ 4, 5, 2, 6, 4, 6 }
//	};
//	int n = 4, m = 6, i;
//	for (int i = 0; i < n; i++)
//	{
//		if (i % 2)
//			sortDesc(arr[i], m);
//		else
//			sortAsc(arr[i], m);
//	}
//	print(arr, n, m);
//	return 0;
//}

//Task 6 -page 164 task 47-da se nameri vsqko k za koeto e izpulneno che k-tiq red na matrica e raven na k-tiq stulb
//const int MAX_SIZE = 20;
//int main(){
//	//vuvejdane na n
//	int n;
//	cin >> n;
//	int a[MAX_SIZE][MAX_SIZE];
//	//vuvejdane namatricata
//	int i, j;
//	for (size_t i = 0; i < n; i++)
//	{
//		for (size_t j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	//namirane na kot 0 do n-1
//	for (size_t k = 0; k < n; k++)
//	{
//		int i = -1;
//		do{
//			i++;
//		} while (a[i][k] == a[k][i] && i < n - 1);
//		if (a[i][k] == a[k][i])
//			cout << k << endl;
//	}
//	return 0;
//}

//da se nameri kolko puti se sreshta duma s v matrica ot nizove pod vtorichniq i diagonal
//const int MAX_SIZE1 = 30;
//const int MAX_SIZE2 = 7;
//int main(){
//	//vuvejdane na duljina n
//	int n;
//	cin >> n;
//	char a[MAX_SIZE1][MAX_SIZE1][MAX_SIZE2];
//	//vuvejdane na tablica s dumi s max size 6
//	for (size_t i = 0; i < n; i++){
//		for (size_t j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	char s[MAX_SIZE2];
//	//vuvejdane na s
//	cin >> s;
//	//namirane na broq na sreshtaniqta na s pod vtorichniq diagonal bez nego
//	int br = 0;
//	for (size_t i = 1; i < n; i++)
//	{
//		for (size_t j = n - i; j < n; j++){
//			if (!strcmp(a[i][j], s))
//				br++;
//		}
//	}
//	cout << br;
//	return 0;
//}
