#include <iostream>
#include <string>
using namespace std;

double const lpg = 0.264179;

double MPG(int miles, int liters)
{
	
	double gallons;
	
	gallons = lpg * liters; 
	
	return (miles / gallons);
}

int main()
{
	
	char choice; 
	int liters, miles;
	
	do
	{
		cout << "Enter the number of liters: ";
		cin >> liters;
		cout << "Enter the number of miles traveled: ";
		cin >> miles;
		
		cout << "The number of miles per gallon = ";
		
		cout << MPG(miles, liters) << endl;
		
		cout << "Do you want to repeat? (Y/N): ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	
	return 0;
}