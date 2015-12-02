#include <iostream>
using namespace std;
//Task 1
void reverse(int arr[], int n)
{
	int tmp;
	for (int i = 0; i<n / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = tmp;
	}
}

//Task 2
char toUpper(char ch)
{
	char result = ch;
	if (ch>'a' && ch<'z')
	{
		result += 'A' - 'a';
	}
	return result;
}
//Task 3
bool isPalindrome(const char* str)
{
	int length = strlen(str);

	bool palindrome = true;
	for (int i = 0; i < length / 2; ++i)
	{
		if (str[i] != str[length - i - 1])
		{
			palindrome = false;
			break;
		}
	}

	return palindrome;
}


void reverseString(char* str)
{
	int length = strlen(str);

	for (int i = 0; i < length / 2; ++i)
	{
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;

	}
}

bool isAllLatinLetters(const char* str)
{
	bool allLatinLetters = true;
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			allLatinLetters = false;
			break;
		}

		++i;
	}

	return allLatinLetters;
}

//Task 4
int toNumber(const char* str)
{
	int i = 0;
	if (str[i] < '0' || str[i] > '9') return -1;

	int number = str[i] - '0';

	++i;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9') return -1;

		number *= 10;
		number += str[i] - '0';

		++i;
	}

	return number;
}
//Task 5
char* insert(char* ch, char a)
{
	int n = strlen(ch);
	char* result = new char[n + 2];
	int i = 0;
	while (i<n && ch[i]<a)
	{
		result[i] = ch[i];
		i++;
	}
	result[i] = a;
	while (i<n)
	{
		result[i + 1] = ch[i];
		i++;
	}
	result[n + 1] = '\0';
	return result;
}
//Task 6
int stringLength(const char* str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		++length;
	}

	return length;
}


void replaceSymbol(char* str, char toReplace, char replaceWith)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == toReplace)
		{
			str[i] = replaceWith;
		}

		i++;
	}
}

void removeSymbol(char* str, char toRemove)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == toRemove)
		{
			char*temp = str;
			int j = i;

			while (temp[j] != '\0')
			{
				temp[j] = temp[j + 1];
				j++;
			}
			strcpy(str, temp);
			break;
		}
		else
		{
			i++;
		}
	}
	
}
void swap2(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}



int main(){

	int a = 5, b = 6;
	cout << a << " " << < b << endl;
	swap2(a, b);
	cout << a << " " << b;
	return 0;
}