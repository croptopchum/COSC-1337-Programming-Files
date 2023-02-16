//***********************************************
//Assignment Name: Practice Exercise 5.08 - Pennies for Pay
//Programmer: Anami Quintero (with Ben Luebbert)
//Completed: 02/15/2023
//Status: Completed

//Description: This program calculates the amount of pennies made
//             each day based on the given worked day to calculate
//             and display the total earnings.
//***********************************************

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //variable
    int daysWorked = 0;      //Number of days worked during the month
    double dailyPay = 0.01;  //Current day's pay (starts with 0.01 on day 1)
    double monthPay = 0.0;   //Accumulator for total month's pay

    //input
    //prompt user to provide amount of days they worked in the month
    cout << "How many days did the employee work this month?";
    cin >> daysWorked;

    //input validate work days value
    while (daysWorked > 31 || daysWorked < 1)
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "\nInvalid work day amount! Must range between 1 - 31 days." << endl;
        cin >> daysWorked;
    }

    //process and output
    //display table format for days and total pay
    cout << fixed << setprecision(2) << endl;
    cout << "Days\t" << "Pay" << endl;
    cout << "\n---------------\n" << endl;
    //calculate total pay for every individual day worked
    for (int dayDisplayed = 1; dayDisplayed <= daysWorked; dayDisplayed++)
    {
        if (dayDisplayed == 1)
        {
            dailyPay = 0.01;
            monthPay += dailyPay;
            cout << dayDisplayed << "\t" << dailyPay << endl;
        }
        else if (dayDisplayed > 1)
        {
            dailyPay *= 2;
            monthPay += dailyPay;
            cout << dayDisplayed << "\t" << dailyPay << endl;
        }
    }
    //display total monthly pay
    cout << "\n---------------\n" << endl;
    cout << "Total $ " << monthPay << endl;
    return 0;
}
