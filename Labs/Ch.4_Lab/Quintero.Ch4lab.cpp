//******************************************************************************
//Assignment Name: Ch. 4 Lab - The Speed of Sound
//Programmer: Anami Quintero
//Completed: 2/12/2023
//Status: Completed

//Description: This program calculate the time traveled based on user's
//             given distance value and chosen medium in which speed of sound
//             traveled through. The program then displays the calculated time.
//******************************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //variables
    const int AIR_SPEED = 1100;         //speed of sound through air
                                        // in feet per seconds
    const int WATER_SPEED = 4900;       //speed of sound through water
                                        //in feet per seconds
    const int STEEL_SPEED = 16400;      //speed of sound through steel
                                        //in feet per seconds
    double distance;                    //distances traveled by speed of sound
    double time;                        //time it took for speed of sound to travel
    int mediumChoice;                  //chosen medium from presented menu
    string mediumName;                 //name of medium based on medium choice
    bool inputValid = true;             //input validation

    //input
    //prompt user to choose a valid medium choice based on created menu
    cout << "This program will tell you how long it takes a sound wave" << endl
         << "to travel a specific distance through a particular medium." << endl;
    cout << "\nSelect a substance for the sound to travel through: " << endl;
    cout << "\t1. Air \n\t2. Water \n\t3. Steel" << endl;
    cin >> mediumChoice;
    //reject any invalid input outside of choice range
    if (mediumChoice < 1 || mediumChoice > 3){
        inputValid = false;
        cout << "\nInvalid menu choice! Choice can only be either 1, 2, or 3! " << endl;
    }
    else{
        //if choice is valid, prompt user for distance value
        cout << "\nEnter the number of feet the sound wave will travel:";
        cin >> distance;
        //reject negative distance values
        if(distance < 0){
            inputValid = false;
            cout << "\nInvalid distance value! Value must be positive! " << endl;
        }
    }

    //process
    //determine travel time based on distance and speed of sound of chosen medium
    switch (mediumChoice) {
        case 1:
            if (mediumChoice == 1) {
                mediumName = "air";
                time = distance / AIR_SPEED;
                break;
            }
        case 2:
            if (mediumChoice == 2) {
                mediumName = "water";
                time = distance / WATER_SPEED;
                break;
            }
        case 3:
            if (mediumChoice == 3) {
                mediumName = "steel";
                time = distance / STEEL_SPEED;
                break;
            }
    }

    //output
    //display time in seconds based on given distance and medium choice if input is valid
    if (inputValid){
        cout << "The sound wave will travel " << distance << " feet through " << mediumName << " in "
             << fixed << setprecision(4) << time << " seconds.";
    }
    return 0;
}