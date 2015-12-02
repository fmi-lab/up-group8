// 1
/*
#include <iostream>

using namespace std;

int main() {
	int month, year;

	cout << "Enter month" << endl;
	cin >> month;

	cout << "Enter year" << endl;
	cin >> year;

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		cout << "It has 31 days" << endl;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		cout << "It has 30 days" << endl;
		break;
	}
	case 2: {
		int days = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
		cout << "It has " << days << " days" << endl;
		break;
	}
	default: {
		cout << "Error!" << endl;
	}
	}

	return 0;
}*/

// 2

/*
#include <iostream>

using namespace std;

int main() {

int planetNumber;
double weight;

cout << "Enter your weight" << endl;
cin >> weight;

cout << "Enter planet number" <<endl;
cin >> planetNumber;

switch(planetNumber) {
case 1: {
cout << "Your weight on Venus will be " << weight * 0.78 << endl;
break;
}
case 2: {
cout << "Your weight on Mars will be " << weight * 0.39 << endl;
break;
}
case 3: {
cout << "Your weight on Jupiter will be " << weight * 2.65 << endl;
break;
}
case 4: {
cout << "Your weight on Saturn will be " << weight * 1.17 << endl;
break;
}
case 5: {
cout << "Your weight on Uranus will be " << weight * 1.05 << endl;
break;
}
case 6: {
cout << "Your weight on Neptune will be " << weight * 1.23 << endl;
break;
}
default: {
cout << "Error" << endl;
}
}

return 0;
}
*/

// 3

/*
#include <iostream>

using namespace std;

int main() {

bool isExperienced;
int age;
double salary = 0;

cout << "Has an experience?" << endl;
cin >> isExperienced;

cout << "What is his age?" << endl;
cin >> age;

//Solution 1
if (age >= 35 && isExperienced) {
salary = 6000;
} else if (age < 35 && age >= 28 && isExperienced) {
salary = 4800;
} else if (age > 28 && isExperienced) {
salary = 3000;
} else if (!isExperienced) {
salary = 2000;
}

//Solution 2
/* if (!isExperienced) {
salary = 2000;
} else if (age < 28) {
salary = 3000;
} else if (age < 35) {
salary = 4800;
} else {
salary = 6000;
}

cout << "Salary is " << salary << endl;

return 0;
}
*/

//4a
/*
#include <iostream>

using namespace std;


int main()
{
	int month;
	cin >> month;

	switch (month)
	{
	case 1: case 2: case 3: cout << "It's winter!" << endl; break;
	case 4: case 5: case 6: cout << "It's spring!" << endl; break;
	case 7: case 8: case 9: cout << "It's summer!" << endl; break;
	case 10: case 11: case 12: cout << "It's autumn!" << endl; break;
	default:
		cout << "There's no month with that number!" << endl;
	}

	return 0;
}*/

//4b 
/*
#include <iostream>

using namespace std;


int main()
{
int day;
cin >> day;

switch(day)
{
case 1: case 2: case 3: case 4: case 5:
cout << "It's a work day!" << endl; break;
case 6: case 7: cout << "It's weekend!" <<endl; break;
default:
cout << "No day with such number!" <<endl;
}

return 0;
}

*/

// 5
/*
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
int n;
cin >> n;

bool isPrime = true;

for(int i = 2; i <= floor(sqrt(n)); ++i)
{
if(n % i == 0)
{
isPrime = false;
break;
}
}

isPrime ? cout << "Prime number." : cout << "Not a prime number.";
cout << endl;

return 0;
}

*/

// 6
/*
#include <iostream>

using namespace std;


int main()
{
int n;
cin >> n;

if(n < 5 || n > 20)
{
cout << "Incorrect input!" << endl;
}

else
{
if(n % 2 == 0)//четно
{
cout << "Even number." << endl;
}

else //нечетно
{
switch(n)
{	//изброяваме нечетните прости числа от 5 до 20
case 5: case 7: case 11: case 13: case 17: case 19:
cout << "Odd prime number." << endl; break;
default: //по подразбиране, чистрото е нечетно, но не просто
cout << "Odd, but not prime number." << endl;
}
}
}

return 0;
}

*/

//7
/*
#include <iostream>

using namespace std;


int main()
{
char symbol;
cin >> symbol;

int number;

//работим с ASCI кодовете на символите, когато ги сравняваме или извършваме аритметични операции с тях
switch(symbol)
{
case '0': case '1': case '2': case '3': case '4':
case '5': case '6' :case '7': case '8': case '9':
number = symbol - '0';
cout << "It's a digit. Its square is " << number * number << "." << endl; break;
default:
if(symbol >= 'A' && symbol <= 'z')
{
cout << "It's a letter." << endl;
}

else
{
cout << "Symbol, other that letter or a digit." << endl;
}

}

return 0;
}

*/

//8
/*
#include <iostream>
using namespace std;
int main(){
int number, product = 1;
cin >> number;
while (number != 0){
product *= number;
cin >> number;
}
cout <<"The product is: "<< product;

return 0;
}
 
 ----variant 2 
 #include <iostream>
 using namespace std;
 int main(){
 int number, product = 1;

 while (1){
 cin >> number;
 if (!number){
 cout << "The product is:" << product;
 break;
 }
 else {
 product *= number;
 }
 }
 return 0;
 }

*/




// 9
/*

*/


//10
/*
#include <iostream>

using namespace std;


int main()
{
int n, factorial = 1;
cin >> n;

for(int i = 2; i <= n; ++i)
{
factorial *= i;
}

cout << n << "! = " << factorial << endl;

return 0;
}

*/

//11
/*
#include <iostream>

using namespace std;


int main()
{
int n;
cin >> n;

for(int i = 0; i < n; ++i)
{
cout<< (i * i - 3 * i) << " ";
}

cout << endl;

return 0;
}

*/

//12
/*
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
int n;
cin >> n;

int numberOfDigits = 0, nCopy = n, sumOfPowers = 0;


//определяме броя на цифрите
while(nCopy > 0)
{
nCopy /= 10;
++numberOfDigits;
}

//отново записваме стойността на n в nCopy
nCopy = n;

//намираме сумата
while(nCopy > 0)
{
sumOfPowers += (int) pow(nCopy % 10, numberOfDigits);
nCopy /= 10;
}

n == sumOfPowers ? cout << "Narcissistic number." : cout << "NOT a Narcissistic number";
cout << endl;

return 0;
}

*/

