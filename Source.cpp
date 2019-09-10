/*
Kevin Lehman - 1463553
Tarrant County College - COSC 1437 - Fall 2017
Assignment  4-1 Source Code
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void raisedSalary(float *);

int main()
{
	string name;
	int age;
	float salary;

	cout << "Enter your name:" << endl;
	cin >> name;
	cout << "You entered " << name << ". Which is stored at " << &name << "." << endl;
	cout << "Enter your age:" << endl;
	cin >> age;
	cout << "You entered " << age << ". Which is stored at " << &age << "." << endl;
	cout << "Enter your salary:" << endl;
	cin >> salary;
	cout << "You entered $" << setprecision(2) << fixed << salary << ". Which is stored at " << &salary << "." << endl;

	raisedSalary(&salary);
	cout << "Your salary after a 10% raise is $" << salary << "." << endl;

	system("PAUSE");
	return 0;
}

void raisedSalary(float *salaryincrease)
{
	*salaryincrease = *salaryincrease + (*salaryincrease/10);
}
