/*
Assignment Name: Ch. 3 Lab - Property Tax
Programmer: Anami Quintero
Completed: 2/3/2023
Status: Completed

Description: This program calculates the assessed value of property
             and annual property tax based on actual property value
             and amount of tax per $100 of assessed value for property
             in Madison County.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //variables
    double actualPropertyValue; //actual value of piece of property
    double taxRatePer100Assessed; //current tax rate for each
                                  //$100 of assessed value
    double assessedPropertyValue; //amount tax owner pays tax on
    double annualPropertyTax; //annual tax charge on property based
                              //on assessed value

    //input
    //get actual property value from user
    cout << "Enter the actual property value: $";
    cin >> actualPropertyValue;
    //get current tax rate for each $100 of assessed value from user
    cout << "Enter the amount of tax per $100 of assessed value: $";
    cin >> taxRatePer100Assessed;

    //process
    //assessed value of property is 60% of actual property value
    assessedPropertyValue = actualPropertyValue * 0.6;
    //tax rate is applied to each $100 of assessed property value
    annualPropertyTax = (assessedPropertyValue/100)*taxRatePer100Assessed;

    //output
    //display actual property value, assesed property value, and property tax
    cout << fixed << setprecision(2);
    cout << "Property Value: $ " << setw(10) << actualPropertyValue << endl;
    cout << "Assessed Value: $ " << setw(10) << assessedPropertyValue << endl;
    cout << "Property Tax:   $ " << setw(10) << annualPropertyTax << endl;

    return 0;
}
