//******************************************************************************
//Assignment Name: Practice Example 4.22 - Mobile Service Provider
//Programmer: Anami Quintero
//Completed: 2/10/2023
//Status: Completed

//Description: This program calculates total cost for different mobile service
//             plans based on usage, base cost for plan type, and if any
//             extra gigs were used that were out of budget. It then summarizes
//             the user's input and displays the results and possible savings.
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

using namespace std;

//main function of the program
int main() {
    //variables
    const int A_GIGS = 2;              //Gigabytes includede in plans A
    const int B_GIGS = 8;              //Gigabytes included in plans B
    const double A_BASE_COST = 39.99;  //Base charge for plans A
    const double B_BASE_COST = 59.99;  //Base charge for plans B
    const double EXTRA_GIGS = 8.00;    //Extra gigabyte charge for plans A & B
    const double C_COST = 79.99;       //Total cost for plan C (unlimited data)
    string customerName;               //User's Name
    char plan;                         //User's plan: A, B, or C
    int usage;                         //Number of gigs of data used
    double aCost;                      //Total monthly charges under plans A
    double bCost;                      //Total monthly charges under plans B
    bool validInput;

    //input
    //Prompt user to present name, plan name, and usage amount
    cout << "Customer name:";
    getline(cin, customerName);

    cout << "Mobile service plan (A, B, or C):";
    cin >> plan;

    //processing
    //validating the input for plan name being in correct range
    switch (tolower(plan)) {
        case 'a' :
        case 'b' :
        case 'c' :
            validInput = true;
            break;
        default :
            validInput = false;
            cout << "WRONGGGGGGGG!!!" << endl;
            exit(1);
            break;
    }

    cout << "Gigabytes of data used last month:";
    cin >> usage;
    //Calculate the cost for plan A and B considering extra gig chart
    if (usage > A_GIGS) {
        aCost = ((usage - A_GIGS) * EXTRA_GIGS) + A_BASE_COST;
    }
    else{
        aCost = A_BASE_COST;
    }
    if (usage > B_GIGS) {
        bCost = ((usage - B_GIGS) * EXTRA_GIGS) + B_BASE_COST;
    }
    else{
        bCost = B_BASE_COST;
    }

    //output
    //display results if plan name input is valid
    if (validInput) {
        //display summary of user's input
        cout << fixed << setprecision(2);
        cout << endl << "Monthly Statement for " << customerName << endl;
        cout << "Plan " << plan << " -- Gigabytes used: " << usage << endl;
        //display total cost for plan and possible savings in other plans based on input
        switch (tolower(plan)) {
            case 'a':
                cout << endl;
                cout << "Total due: $" << aCost << endl;
                if (aCost > bCost && aCost > C_COST){
                    cout << "By switching to Plan B you would save $" << aCost - bCost << endl;
                    cout << "By switching to Plan C you would save $" << aCost - C_COST << endl;
                }
                break;
            case 'b':
                cout << endl;
                cout << "Total due: $" << bCost << endl;
                if (bCost > aCost && bCost > C_COST){
                    cout << "By switching to Plan A you would save $" << bCost - aCost << endl;
                    cout << "By switching to Plan C you would save $" << bCost - C_COST << endl;
                }
                break;
            case 'c':
                cout << endl;
                cout << "Total due: $" << C_COST << endl;
                if (C_COST > aCost && C_COST > bCost){
                    cout << "By switching to Plan A you would save $" << C_COST - aCost << endl;
                    cout << "By switching to Plan B you would save $" << C_COST - bCost << endl;
                }
                break;
        }
    }
    return 0;
}
