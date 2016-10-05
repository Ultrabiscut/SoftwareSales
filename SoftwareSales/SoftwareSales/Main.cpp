#include <iostream>
#include <iomanip>
using namespace std;

//Program: SoftwareSales
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Asks for the number of units sold and
//	computes the total cost of the purchase.


int main()
{
	//decalre variables
	int iQuantity;
	int iUnitPrice = 99;
	double dDiscount;
	double dTotal;

	//set precison
	cout << fixed << setprecision(2);

	//get input
	cout << "Number of units sold: ";
	cin >> iQuantity;

	// else if statement
	if ((iQuantity >= 0) && (iQuantity <= 9))
		dDiscount = 0;
	else if ((iQuantity >= 10) && (iQuantity <= 19))
		dDiscount = .20;
	else if ((iQuantity >= 20) && (iQuantity <= 49))
		dDiscount = .30;
	else if ((iQuantity >= 50) && (iQuantity <= 99))
		dDiscount = .40;
	else if ((iQuantity >= 100) && (100 < iQuantity))
		dDiscount = .50;
	else
		cout << "Invalid input of units sold entered!" << endl;

	//calculate
	dTotal = (iQuantity * iUnitPrice) - (iQuantity * iUnitPrice * dDiscount);


	//output
	cout << "Your total cost of the purchase was: $" << dTotal << endl;

	return 0;
}