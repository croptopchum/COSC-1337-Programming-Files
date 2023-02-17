/*
 * Assignment Name: Basketball Player Height
 * Programmer:      Anami Quintero
 * Completed:       1/27/2023
 * Status:          Completed
 *
 * Description: This program computes the height of the star
 *              player in a high school basketball team in feet/inches
 *              format.
 */

#include <iostream>

using namespace std;

int main() {
    //variables
    int player_height_inch = 75;  //star player's height in only inches
    int player_height_feet;       //star player's height in feet
    int player_height_remainder;  //star player's height in remaining inches
                                  //after feet are removed
    //input (already declared)

    //processing
    //calculate feet by dividing the height in inches by 12
    player_height_feet = player_height_inch / 12;
    //calculate the inches remaining by finding the remainder
    //of calculating for feet
    player_height_remainder = player_height_inch % 12;

    //output
    //print star player height reformatted in feet/inch terms
    cout << "A " << player_height_inch << " inch tall basketball player is "
         << player_height_feet << " feet " << player_height_remainder << " inches tall.";
    return 0;
}
