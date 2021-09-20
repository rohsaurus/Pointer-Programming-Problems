/**
 *Rohan Parikh
 *Pointer Programming Problems
 *14 September 2021 - 21 September 2021
 *Extra Thing: Calculates and prints area as well (Building Volume Problem)
 */


/*
 *What to do for the last problem
 *int* someArray = new Int[sizeOfArray]
It goes into heap memory
Remember then to delete
delete[] someArray;
delete someIntegerorSomething;
 */
#include "BuildingSpace.h"
#include "String Printing Problem.h"
#include "Array Problem.h"
using namespace std;

// Declaring method that will run the functions required for the building volume problem
void BuildingVolumeProblemFunction()
{
    // defining variables to plug into functions
    int length, width, height, volume, area;
    // pass by pointers
    building_dimensions(&height, &width, &length);

    
    // pass by reference for cubic feet and square feet and printing function
    cubic_feet(height, width,length, volume);
    // Extra thing method
    square_feet(width,length, area);
    // printing the volume and area (Also pass by reference)
    printing(volume, area);
}

int main(int argc, char* argv[])
{
    // Running building volume problem function
    BuildingVolumeProblemFunction();

    // String Printing Problem
    string name;
    cout << "Value of String variable 'name' before the first function: " + name + "\n";
    fillingname(name);
    cout << "Value of String variable 'name' after the first function: " + name + "\n";
    printingnamebackwards(name);

    // array problem
    int *numberArray* = new int[9];
    *numberArray* (0) = 1;
    *numberArray* (1) = 10;
    *numberArray* (2) = 7;
    *numberArray* (3) = 4;
    *numberArray* (4) = 2;
    *numberArray* (5) = 3;
    *numberArray* (6) = 6;
    *numberArray* (7) = 8;
    *numberArray* (8) = 5;
    *numberArray* (9) = 9;

    // printing original array
    cout<< "Printing original array before sort.\n";
    for (int x : *numberArray*)
    {
        cout << "x ";
    }
    return 0;
}



