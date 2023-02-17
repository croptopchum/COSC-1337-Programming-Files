/*
 * Assignment Name: Flash Drive Price
 * Programmer:      Anami Quintero
 * Completed:       1/27/2023
 * Status:          Completed
 *
 * Description: This program computes price of USB flash drives
 *              needed for electronics company to make a 35% profit
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //variables
    double usb_cost_each = 8.00;   //cost to produce a usb a piece
    double usb_price;               //cost to make usb based on profit percentage
    int profit_percent = 35;       //profit percentage

    //input (already declared)

    //processing
    //calculate usb price by multiplying cost and profit percentage
    //and adding it to the original cost of a usb
    usb_price = (usb_cost_each * (profit_percent * 0.01)) + usb_cost_each;

    //output
    //print usb sale price to screen according to profit percentage
    cout << fixed << setprecision(1);
    cout << "To have a " << profit_percent <<
            "% profit, the flash drive should sell for $" <<
            usb_price;
    return 0;
}
