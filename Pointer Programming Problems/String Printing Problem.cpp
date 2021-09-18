#include "String Printing Problem.h"
#include <iostream>
using namespace std;

void fillingname(std::string& x)
{
    // informing user that they are in the first function
    cout << "User, you are in the first function which will fill the string variable with a name.\n";
    // filling with name
    x = "Name";
}

void printingnamebackwards(std::string& x)
{
    // algorithem to print the name backwards
    int stringLength = x.length();
    ++ stringLength;
    // setting up a counter to let user know which loop # they are on
    int count = 1;
    while (stringLength != 0)
    {
        // informing user of loop #1
        cout << "This is loop # " + count + endl; 
        -- stringLength;
        cout << x[stringLength];
        cout << endl;
    }
}
