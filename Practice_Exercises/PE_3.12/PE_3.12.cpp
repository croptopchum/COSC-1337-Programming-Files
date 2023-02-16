/*
Assignment Name: Practice Exercise 3.12 - How Many Calories?
Programmer: Anami Quintero
Completed: 2/3/2023
Status: Completed

Description: This program collects the number of cookies
             consumed by the user and calculates the
             calories consumed according to the amount
             inserted.
*/

#include <iostream>

using namespace std;

int main() {
    //variables
    const int COOKIES_PER_BAG = 30;
    const int SERVINGS_PER_BAG = 10;
    const int CALORIES_PER_SERVING = 240;
    int cookiesEaten; //Number of cookies eaten
    int servingSize; //Number of cookies in a serving
    int caloriesPerCookie; //Calories in one cookie
    int caloriesConsumed; //Number of calories consumed

    //input
    //Get number of cookies from user
    cout << "Number of cookies eaten:";
    cin >> cookiesEaten;

    //process
    //finds serving size by finding how many cookies go into a
    //serving per bag
    servingSize = COOKIES_PER_BAG / SERVINGS_PER_BAG;
    //finds calories per cookies by finding how many calories
    //go into each cookie in a serving size
    caloriesPerCookie = CALORIES_PER_SERVING / servingSize;
    //finds calories consumed by multiplying calories per
    //cookie by the cookies eaten by the user
    caloriesConsumed = caloriesPerCookie * cookiesEaten;

    //output
    //display calories consumed from cookies
    cout << "You consumed " << caloriesConsumed  << " calories.";

    return 0;
}
