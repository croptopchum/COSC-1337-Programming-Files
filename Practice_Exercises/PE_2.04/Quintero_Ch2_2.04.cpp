/*
 * Assignment Name: Practice Exercise 2.04
 * Programmer:      Anami Quintero (worked with Wan Qiong Ni)
 * Completed:       1/25/2023
 * Status:          Completed
 *
 * Description: This program computes the tip and tax amount
 *              of a meal based on given tip and tax rates to
 *              determine the total bill of a meal.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //variables
    double mealCost = 44.50; //Meal cost
    double taxRate = 0.0675; //Tax rate
    double tipRate = 0.15;   //Tip percentage
    double taxAmt;           //Tax Amount
    double tipAmt;           //Tip Amount
    double totalBill;        //Total amount to pay
    //input (already initialized)

    //process
    //calculate tax by multiplying tax rate with meal cost
    taxAmt = mealCost*taxRate;
    //calculate tip by multiplying tip rate with meal cost
    tipAmt = (mealCost+taxAmt)*tipRate;
    //calculate total bill by adding tip, tax, and meal cost
    totalBill = mealCost+taxAmt+tipAmt;

    //output
    //display meal cost, tax and tip amount, and total bill
    cout << fixed << setprecision(2);
    cout << "Meal Cost $" << mealCost << endl;
    cout << "Tax       $" << taxAmt << endl;
    cout << "Tip       $" << tipAmt << endl;
    cout << "Total     $" << totalBill << endl;
    return 0;
}
