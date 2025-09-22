/*
* File: Lab Problem 4 A
* Author: Macie Allen
* Date: 9/16/25
* 
* Description: Calculate the tax of an item with correct rounding
*/

#include <iostream>
using namespace std;

int main() {
	//Cost in dollars
	cout << "Enter the cost of the item: ";
	double cost;
	cin >> cost;

	//Calculating tax rate
	double taxrate = .0625;								//For rounding up needs to add +1 digit to the second digit(meaning add 10)
	double taxcost = (taxrate * cost); 
	cout << "Multiplied taxcost: " << taxcost << endl;
	int thirddigit = (int)(taxcost * 1000) % 10;
	cout << "Digit: " << thirddigit << endl;
	double totalcost;

	//Rounding the third digit
	if (thirddigit >= 5) {
		double roundedTax = taxcost + .01;
		totalcost = roundedTax + cost;
	}
	else {
		totalcost = (double)taxcost + cost; 
	} 

	//Shifting over to get back in right place
	int shift = totalcost * 100;  
	cout << shift << endl;
	double endcost = shift / 100.00;
	cout << endcost;
	cout << "The total cost with tax is: " << endcost << endl;

	return 0;
}