// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Mike Vidal

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased 
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.
	string nameOfProduct;  //contains product name.
	

	
    cout << "please input the name of the item" << endl;
	cin >> nameOfProduct;

	cout << setprecision(3) <<showpoint;	// formatted output 
	cout << "Please input the number of items bought" << endl;
    
    cin >> quantity;

	// Fill in the input statement to bring in the quantity.

    cout << "PLease enter the price of te item" << endl;
	// Fill in the prompt to ask for the price.

    cin >> itemPrice;
	// Fill in the input statement to bring in the price of each item.
 
    totalBill = itemPrice*quantity;
	// Fill in the assignment statement to determine the total bill.

    cout << "The item you bought is " << nameOfProduct << endl;
    cout << " The total bill is " << totalBill << endl;
	// Fill in the output statement to print total bill,
	// with a label to the screen.

	return 0;
}