/*Name: Anami
 *Status: Completed
 *Description: This program asks for length and width from a user
 *             to find the area of a flower garden and displays the result.
*/
#include <iostream>
using namespace std;

int main() {
    int area_length; //holds user's length value
    int area_width; //holds user's width value
    int flower_garden_area; //holds calculated area value
    //input
    cout << "This program computes the size of a rectangle flower garden.\n";
    cout << "How many feet long is the garden?";
    cin >> area_length;
    cout << "How many feet wide is the garden?";
    cin >> area_width;
    //process
    flower_garden_area = area_length*area_width;
    //output
    cout << "The garden contains " << flower_garden_area << " square feet.";
    return 0;
}
