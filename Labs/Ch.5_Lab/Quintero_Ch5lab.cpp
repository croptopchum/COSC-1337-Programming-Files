//***********************************************
//Assignment Name: Ch. 5 Lab - Sales Bar Chart
//Programmer: Anami Quintero
//Completed: 2/16/2023
//Status: Completed

//Description: This program creates and displays a vertical
//             bar graph out of the user's input on the
//             total sales of three different stores.
//***********************************************

#include <iostream>   //included to allow input
                      // and output of values
#include <math.h>      //included to round values
#include <climits>    //included to use integer maximums

using namespace std;

int main() {
    //variables
    float store1Sales;     //total sales of Store 1
    float store2Sales;     //total sales of Store 2
    float store3Sales;     //total sales of Store 3
    int store1Asterisks;   //rounds store 1 total sales
                           //to the nearest $100 per $100
    int store2Asterisks;   //rounds store 2 total sales
                           //to the nearest $100 per $100
    int store3Asterisks;   //rounds store 3 total sales
                           //to the nearest $100 per $100

    //input
    //prompt user for total sales for store 1
    cout << "Enter today's sales for store 1:";
    cin >> store1Sales;
    //validate input to only accept positive numbers
    while (store1Sales < 0 || cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Please enter a positive number for Store 1:";
        cin >> store1Sales;
    }
    //prompt user for total sales for store 2
    cout << "Enter today's sales for store 2:";
    cin >> store2Sales;
    //validate input to only accept positive numbers
    while (store2Sales < 0 || cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Please enter a positive number for Store 2:";
        cin >> store2Sales;
    }
    //prompt user for total sales for store 3
    cout << "Enter today's sales for store 3:";
    cin >> store3Sales;
    //validate input to only accept positive numbers
    while (store3Sales < 0 || cin.fail()){
        cin.clear();
        cin.ignore(INT_MAX,'\n');
        cout << "Please enter a positive number for Store 3:";
        cin >> store3Sales;
    }

    //process
    //calculate total sales per $100 rounded to the nearest $100
    //for each store
    store1Asterisks = round(store1Sales/100);
    store2Asterisks = round(store2Sales/100);
    store3Asterisks = round(store3Sales/100);

    //output
    //display vertical bar graph of total sales per $100
    //for each store
    cout << "     DAILY SALES" << endl;
    cout << "   (each * = $100)" << endl;
    cout << "\nStore 1: ";
    for (int i = 0; i < store1Asterisks; i++){
        cout << '*';
    }
    cout << "\nStore 2: ";
    for (int i = 0; i < store2Asterisks; i++){
        cout << '*';
    }
    cout << "\nStore 3: ";
    for (int i = 0; i < store3Asterisks; i++){
        cout << '*';
    }

    return 0;
}
