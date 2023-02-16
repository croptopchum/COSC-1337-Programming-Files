/*
 * Assignment Name: Practice Exercise 2.20
 * Programmer:      Anami Quintero (worked with Wan Qiong Ni)
 * Completed:       1/25/2023
 * Status:          Completed
 *
 * Description: This program computes the total square feet of
 *              fence to be painted and the number of gallons needed.
 */
#include <iostream>

using namespace std;

int main() {
    //variable
    int length = 100;          //Fence length in ft.
    int height = 6;            //Fence height in ft.
    int numCoats = 2;          //Number of coats of paint.
    int numSides = 2;          //Number of fence sides to paint
    double areaToPaint;        //SqFt of fence to be painted
    double sqFtPerGal = 340.0; //Number of sq. ft. a gallon can cover
    double gallons;            //Number of gallons needed.
    //input (already initialized)

    //process
    //calculate area to paint by multiplying length and height
    //with number of sides and coats needed.
    areaToPaint = length*height*numSides*numCoats;
    //calculate gallons of paint needed by dividing area by
    //the number of square feet a gallon of paint can cover
    gallons = areaToPaint/sqFtPerGal;

    //output
    //display amount of gallons of painted needed to paint entire area
    //and amount of coats of paint needed per side and dimensions of area
    cout << gallons << " gallons of paint are needed to paint." << endl;
    cout << numCoats << " coats on each side of a " << length << " x " << height << " foot fence." << endl;
    return 0;
}
