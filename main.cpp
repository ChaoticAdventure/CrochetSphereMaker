//
//  main.cpp
//  Sphere Project
//
//  Created by Nathan Gottlieb on 2/27/25.
//
using namespace std;
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    int stitchesAround, rowsIncrease, rowsAround, totalRows;
    cout << "This program can print a crochet pattern for a sphere." << endl <<
    "How many stitches around do you want the widest portion of your sphere to be? Please choose a number that is divisible by 6." << endl;
    cin >> stitchesAround;
    string stitchesAroundString = to_string(stitchesAround);
    string colonSpace = ": ";
    
    //increase strings
    string increase1 = "1: sc around (6)",
    increase2 = "2: inc around (12)",
    increase3 = "3: [1 sc, 1 inc] around (18)",
    increase4 = "4: 1 sc, 1 inc, [2 sc, 1 inc] x5, 1 sc (24)",
    increase5 = "5: [3sc, 1 inc] around (30)",
    increase6 = "6: 2 sc, 1 inc, [4 sc, 1 inc] x5, 2 sc (36)",
    increase7 = "7: [5 sc, 1 inc] around (42)",
    increase8 = "8: 3 sc, 1 inc, [6 sc, 1 inc] x5, 3 sc (48)";
    //around string
    string around = "sc around (" + stitchesAroundString + ")";
    //decrease strings
    string decrease0 = "Close and fasten off",
    decrease1 = "dec around (6)",
    decrease2 = "[1 sc, 1 dec] around (12)",
    decrease3 = "1 sc, 1 dec, [2 sc, 1 dec] x5, 1 sc (18)",
    decrease4 = "[3 sc, 1 dec] around (24)",
    decrease5 = "2 sc, 1 dec, [4 sc, 1 dec] x5, 2 sc (30)",
    decrease6 = "[5 sc, 1 dec] around (36)",
    decrease7 = "3 sc, 1 dec, [6 sc, 1 dec] x5, 3 sc (42)";
    

    if(stitchesAround % 6 == 0) {
        rowsIncrease = stitchesAround / 6;
        rowsAround = rowsIncrease + 1;
        totalRows = (rowsIncrease * 2) + rowsAround - 1;
        cout << "Total amount of rows: " << totalRows << endl;
        cout << "Amount of increase rows: " << rowsIncrease << endl;
        cout << "Amount of rows around: " << rowsAround << endl;
        cout << "Amount of decrease rows: " << rowsIncrease - 1 << endl;
        cout << " " << endl;
        
        
        switch(rowsIncrease) {
            case 1:
                cout << "It's not a great idea to make a sphere with only six stitches. Try a larger number." << endl;
                break;
            case 2:
                cout << increase1 << endl <<
                increase2 << endl <<
                "3-5: " << around << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 3:
                cout << increase1 << endl <<
                increase2 << endl <<
                increase3 << endl <<
                "4-7: " << around << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 4:
                cout << increase1 << endl <<
                increase2 << endl <<
                increase3 << endl <<
                increase4 << endl <<
                "5-9: " << around << endl <<
                totalRows - 2 << colonSpace << decrease3 << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 5:
                cout << increase1 << endl <<
                increase2 << endl <<
                increase3 << endl <<
                increase4 << endl <<
                increase5 << endl <<
                "6-11: " << around << endl <<
                totalRows - 3 << colonSpace << decrease4 << endl <<
                totalRows - 2 << colonSpace << decrease3 << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 6:
                cout << increase1 << endl <<
                increase2 << endl <<
                increase3 << endl <<
                increase4 << endl <<
                increase5 << endl <<
                increase6 << endl <<
                "7-13: " << around << endl <<
                totalRows - 4 << colonSpace << decrease5 << endl <<
                totalRows - 3 << colonSpace << decrease4 << endl <<
                totalRows - 2 << colonSpace << decrease3 << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 7:
                cout << increase1 << endl
                << increase2 << endl <<
                increase3 << endl <<
                increase4 << endl <<
                increase5 << endl <<
                increase6 << endl <<
                increase7 << endl <<
                "8-15: " << around << endl <<
                totalRows - 5 << colonSpace << decrease6 << endl <<
                totalRows - 4 << colonSpace << decrease5 << endl <<
                totalRows - 3 << colonSpace << decrease4 << endl <<
                totalRows - 2 << colonSpace << decrease3 << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            case 8:
                cout << increase1 << endl
                << increase2 << endl <<
                increase3 << endl <<
                increase4 << endl <<
                increase5 << endl <<
                increase6 << endl <<
                increase7 << endl <<
                increase8 << endl <<
                "8-15: " << around << endl <<
                totalRows - 6 << colonSpace << decrease7 << endl <<
                totalRows - 5 << colonSpace << decrease6 << endl <<
                totalRows - 4 << colonSpace << decrease5 << endl <<
                totalRows - 3 << colonSpace << decrease4 << endl <<
                totalRows - 2 << colonSpace << decrease3 << endl <<
                totalRows - 1 << colonSpace << decrease2 << endl <<
                totalRows << colonSpace << decrease1 << endl <<
                decrease0 << endl;
                break;
            default:
                cout << "Sorry, this has not been programmed yet." << endl;
        }
    }
    else
        cout << "Please choose a number that is divisible by 6." << endl;
}
