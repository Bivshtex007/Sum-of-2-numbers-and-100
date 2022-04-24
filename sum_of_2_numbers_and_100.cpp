#include <iostream>
#include <cmath>
using namespace std;

int main() {

int sum, num1, num2;


cout << "Enter Number One..." << endl;
cin >> num1;
cout << "Enter Number Two..." << endl;
cin >> num2;
cout << endl;
sum = num1 + num2;

if (sum > 100)
{
	cout << "Your number is more than 100" << endl;
}
else if (sum < 100)
{
	cout << "Your number is less than 100" << endl;
}
else if (sum = 100)
{
	cout << "Your number equals 100" << endl;
}
return 0;
}
