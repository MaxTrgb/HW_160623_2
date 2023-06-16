/*Write a program that asks for a 10-character string consisting only of lowercase English letters and numbers, 
and outputs the word 'LETTERS' if the string consists entirely of letters, 
the word 'DIGITS' if the string consists entirely of digits, 
and the word 'ANOTHER ', if the line contains both numbers and letters.*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string input;
    cout << "Enter a 10-character string consisting only of lowercase English letters and numbers: ";
    cin >> input;

    // Check if the input has exactly 10 characters
    if (input.length() != 10) {

        cout << "Invalid input. Please enter exactly 10 characters." << endl;
        return 0;
    }

    bool containsLetters = false;
    bool containsDigits = false;

    // Check each character in the input string
    for (char c : input) {

        if (!isalnum(c)) {

            cout << "Invalid input. The string should consist only of lowercase English letters and numbers." << endl;
            return 0;
        }
        if (isalpha(c)) {

            containsLetters = true;
        }
        else if (isdigit(c)) {

            containsDigits = true;
        }
    }

    // Output the result based on the checks
    if (containsLetters && containsDigits) {

        cout << "ANOTHER" << endl;
    }
    else if (containsLetters) {

        cout << "LETTERS" << endl;
    }
    else if (containsDigits) {

        cout << "DIGITS" << endl;
    }

    return 0;
}
