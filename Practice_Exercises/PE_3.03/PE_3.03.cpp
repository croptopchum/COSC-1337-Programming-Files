/*
Assignment Name: Practice Exercise 3.03 - Housing Costs
Programmer: Anami Quintero
Completed: 02/3/2023
Status: Completed

Description: This program collects the user's monthly housing
             costs for rent, utilities, phones, cable, and
             internet to calculate the total net monthly and
             annual housing costs and displays results.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //variables
    double rent; //monthly cost for rent or mortgage
    double utilities; //monthly cost for utilities
    double phones; //monthly cost for phones use
    double cable; //monthly cost for cable use
    double internet; //monthly cost for internet use
    double monthlyTotal; //total monthly housing costs
    double annualTotal; //total annual housing costs

    //input
    //prompt user to insert monthly costs for rent/mortgage,
    //utilities, phones, cable, internet
    cout << "Enter your monthly costs for the following: " << endl;
    cout << "Rent or mortgage $";
    cin >> rent;
    cout << "Utilities $";
    cin >> utilities;
    cout << "Phone(s) $";
    cin >> phones;
    cout << "Cable $";
    cin >> cable;
    cout << "Internet $";
    cin >> internet;

    //process
    //calculate monthly housing costs by adding all user's values together
    monthlyTotal = rent + utilities + phones + cable + internet;
    //calculate annual costs by multiplying monthly costs by 12 for each month
    annualTotal = monthlyTotal * 12;

    //output
    //display monthly and annual housing costs
    cout << fixed << setprecision(2);
    cout << "Total monthly housing costs $ " << monthlyTotal << endl;
    cout << "Total annual housing costs $ " << annualTotal << endl;

    return 0;
}
