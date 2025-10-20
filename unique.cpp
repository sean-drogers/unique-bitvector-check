/*******************************************************************************
 * Name        : unique.cpp
 * Author      : Sean Rogers
 * Date        : 9/27/2025
 * Description : Determining uniqueness of chars with int as bit vector.
 * Pledge      : I pledge my honor that I have abided by the Stevens Honor System.
 ******************************************************************************/
#include <iostream>
#include <cctype>

using namespace std;

bool is_all_lowercase(const string &s) {
    // TODO: returns true if all characters in string are lowercase
    // letters in the English alphabet; false otherwise.

    for (char c : s) {  // Goes through string char by char
        if (c < 'a' || c > 'z') { // Check if it is a uppercase letter
            return false;
        }
    }
    return true;
}

bool all_unique_letters(const string &s) {
    // TODO: returns true if all letters in string are unique, that is
    // no duplicates are found; false otherwise.

    // You MUST use only single unsigned integers and work with bitwise
    // and bitshifting operators only.  Using any other kind of solution
    // will automatically result in a grade of ZERO for the whole assignment.

    unsigned int duplicate = 0;

    for(char s : c){
        unsigned int mask = 1u << (c - 'a'); // mask for this
        if(duplicate & mask){ // check if bit is already set
            return false; // duplicate found
        }
        duplicate |= mask; // marks the letter as seen 
    }
    return true; // no duplicates found
}

int 
main(int argc, char * const argv[]) {
    // TODO: reads and parses command line arguments.
    // Calls other functions to produce correct output.

    /*
    Case 1: No input arguments
    Print usage message.
    $ ./unique
    Usage: ./unique <string>

    Case 2: Too many input arguments
    Print usage message.
    $ ./unique too many words
    Usage: ./unique <string>

    Case 3: Bad input
    $ ./unique HI
    Error: String must contain only lowercase letters.

    Case 4: Bad input
    $ ./unique 1234567890
    Error: String must contain only lowercase letters.

    Case 5: Unique
    $ ./unique abcdefghijklmnopqrstuvwxyz
    All letters are unique.

    Case 6: Duplicates
    $ ./unique longstring
    Duplicate letters found.
    */

    // Case 1 and 2
    if (argc < 2) { // no input
        cout << "Usage: ./unique <string>" << endl;
        return 1;
    } else if (argc > 2) { 
        cout << "Usage: ./unique <string>" << endl;
        return 1;
    }
    
    // Case 3
    if (!is_all_lowercase(input)) {
        cout << "Error: String must contain only lowercase letters." << endl;
        return 1;
    }

    // Case 4 and 5
    if (all_unique_letters(input)) {
        cout << "All letters are unique." << endl;
    } else {
        cout << "Duplicate letters found." << endl;
    }

}
