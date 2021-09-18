/**
*Rohan Parikh
*Pointer Programming Problems
*14 September 2021 - 21 September 2021
*Extra Thing: Calculates and prints area as well (Building Volume Problem)
*/
#include "BuildingSpace.h"
using namespace std;
void printing(int &pVolume, int &pArea)
{
    // printing volume
    cout << "The volume of air in the building is ";
    cout << pVolume;
    cout << " cubic feet.\n";

    // printing area (Extra Thing)
    cout << "The area of the base of the building is ";
    cout << pArea;
    cout << " square feet.\n";
}

void building_dimensions(int *pHeight, int *pWidth, int *pLength)
{
    cout << "Enter the height of the building\n";
    cin >> *pHeight;
    cout << "Enter the width of the building\n";
    cin >> *pWidth;
    cout << "Enter the length of the building\n";
    cin >> *pLength;
    
}
void cubic_feet(int &pHeight, int &pWidth, int &pLength,int &pVolume)
{
    pVolume = pHeight * pWidth * pLength;
    return;
}

// Extra thing function
// Calculating area and sending it via refrence to printing function
void square_feet(int& pWidth, int& pLength, int &pArea)
{
    pArea = pWidth * pLength;
}