#include <iostream>

using namespace std;

//задача 1
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//задача 2
void Reverse(int* a, int size)
{
	for(int i = 0; i < size / 2; ++ i)
	{
		Swap((a + i), (a + size - i - 1));
	}
}

int main()
{
	//int a[] = {1, 2, 3, 3, 5, 5, -10, 5};
	//Reverse(a, 8);

	//for(int i = 0; i < 8; ++i)
	//{
		//cout << a[i] << ' ';
	//}

	return 0;
}
