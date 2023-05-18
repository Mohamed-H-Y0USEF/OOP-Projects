#include<iostream>
using namespace std;
void RevNumber(int &number)
{
	int retNumber = 0;
	while (number != 0)
	{
		int lastDigit = number % 10;
		retNumber *= 10; // shift retNumber one digit to set the lastDigit
		retNumber += lastDigit;
		number /= 10;// remove the last digit
	}
	 number = retNumber;
}
int main()
{
	int number = 12345;
	cout << "the number befor reverse : " << number << endl;
	RevNumber(number);
	cout << "the number after reverse : " << number << endl;

	return 0;
}