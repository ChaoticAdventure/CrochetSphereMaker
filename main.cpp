//
//  main.cpp
//  Sphere Project 2.0
//
//  Created by Nathan Gottlieb on 3/7/25.
//
using namespace std;
#include <iostream>
#include <string>


int main() {
    int stitchesAround, rowsIncrease, rowsAround, totalRows, rowsDecrease, decreaseCounter, currentMaximum = 48;
    char input;
    //increase strings
    string increase1 = "1: sc around (6)",
    increase2 = "2: inc around (12)",
    increase3 = "3: [1 sc, 1 inc] around (18)",
    increase4 = "4: 1 sc, 1 inc, [2 sc, 1 inc] x5, 1 sc (24)",
    increase5 = "5: [3sc, 1 inc] around (30)",
    increase6 = "6: 2 sc, 1 inc, [4 sc, 1 inc] x5, 2 sc (36)",
    increase7 = "7: [5 sc, 1 inc] around (42)",
    increase8 = "8: 3 sc, 1 inc, [6 sc, 1 inc] x5, 3 sc (48)";
    //decrease strings
    string decrease0 = "Close and fasten off",
    decrease1 = "dec around (6)",
    decrease2 = "[1 sc, 1 dec] around (12)",
    decrease3 = "1 sc, 1 dec, [2 sc, 1 dec] x5, 1 sc (18)",
    decrease4 = "[3 sc, 1 dec] around (24)",
    decrease5 = "2 sc, 1 dec, [4 sc, 1 dec] x5, 2 sc (30)",
    decrease6 = "[5 sc, 1 dec] around (36)",
    decrease7 = "3 sc, 1 dec, [6 sc, 1 dec] x5, 3 sc (42)",
    colonSpace = ": ";
    
    do {
        cout << "This program can print a crochet pattern for a sphere." << endl << "How many stitches around do you want the widest portion of your sphere to be? Please choose a number that is divisible by 6." << endl;
        
        cin >> stitchesAround;
        while (stitchesAround % 6 != 0 || stitchesAround <= 6 || stitchesAround > currentMaximum) {
            if (stitchesAround <= 6)
                cout << "Sorry, your sphere would be too small. Please choose a larger number." << endl;
            else if (stitchesAround > currentMaximum)
                cout << "Sorry, your sphere is too large. Please choose a number equal to " << currentMaximum << " or smaller." << endl;
            else if (stitchesAround % 6 != 0)
                cout << "Please choose a number that is divisible by 6." << endl;
            
            cin >> stitchesAround;
        }
        string stitchesAroundString = to_string(stitchesAround);
        string around = "sc around (" + stitchesAroundString + ")";
        rowsIncrease = stitchesAround / 6;
        
        rowsIncrease = stitchesAround / 6;
        rowsAround = rowsIncrease + 1;
        totalRows = (rowsIncrease * 2) + rowsAround - 1;
        rowsDecrease = rowsIncrease - 1;
        decreaseCounter = 1;
        cout << endl << "Total amount of rows: " << totalRows << endl <<
        "Amount of increase rows: " << rowsIncrease << endl <<
        "Amount of rows around: " << rowsAround << endl <<
        "Amount of decrease rows: " << rowsDecrease << endl << endl;
        
        cout << increase1 << endl;
        if (rowsIncrease >= 2)
            cout << increase2 << endl;
        if (rowsIncrease >= 3)
            cout << increase3 << endl;
        if (rowsIncrease >= 4)
            cout << increase4 << endl;
        if (rowsIncrease >= 5)
            cout << increase5 << endl;
        if (rowsIncrease >= 6)
            cout << increase6 << endl;
        if (rowsIncrease >= 7)
            cout << increase7 << endl;
        if (rowsIncrease >= 8)
            cout << increase8 << endl;
        
        cout << rowsIncrease + 1 << "-" << rowsIncrease + rowsAround << colonSpace << around << endl;
        
        if (rowsIncrease >= 8) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease7 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 7) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease6 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 6) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease5 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 5) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease4 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 4) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease3 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 3) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease2 << endl;
            decreaseCounter += 1;
        }
        if (rowsIncrease >= 2) {
            cout << rowsIncrease + rowsAround + decreaseCounter << colonSpace << decrease1 << endl;
            decreaseCounter += 1;
        }
        cout << endl << "Press 'e' to exit     |     Press any other character to reset" << endl;
        cin >> input;
    }
    while (input != 'e' || input != 'E');
    cout << "Thank you for using the crochet sphere pattern printer. :)" << endl;
}
