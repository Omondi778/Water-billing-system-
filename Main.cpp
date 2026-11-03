C++
#include <iostream>
using namespace std;

// Function to enter customer details
void getCustomerDetails(string &name, double &units)
{
    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter units consumed: ";
    cin >> units;
}

// Function to calculate water bill
double calculateBill(double units, double rate)
{
    return units * rate;
}

// Function to apply discount
double applyDiscount(double bill, double units)
{
    if (units > 100)
        return bill * 0.10;

    return 0;
}

// Function to display water bill
void displayBill(string name, double units, double bill, double discount)
{
    cout << "\n------ WATER BILL ------" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Bill Before Discount: KSh " << bill << endl;
    cout << "Discount: KSh " << discount << endl;
    cout << "Final Amount: KSh " << bill - discount << endl;
}

int main()
{
    string name;
    double units, rate = 50, bill, discount;

    getCustomerDetails(name, units);

    bill = calculateBill(units, rate);

    discount = applyDiscount(bill, units);

    displayBill(name, units, bill, discount);

    return 0;
}
