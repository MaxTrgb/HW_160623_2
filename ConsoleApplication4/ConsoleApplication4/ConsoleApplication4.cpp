/*Write a program that asks for a 10-character string 
consisting of only lowercase English letters and returns 'YES' 
if the letters are in ascending order, and 'NO' otherwise.*/

#include <iostream>
#include <string>

using namespace std;

// Function to check if the characters in the string are in ascending order
bool isAscendingOrder(const string& str) {

    for (int i = 0; i < str.length() - 1; i++) {

        if (str[i] >= str[i + 1]) {

            return false;
        }
    }
    return true;
}

int main() {

    string input;

    // Prompt the user to enter a 10-character string
    cout << "Enter a 10-character string consisting of lowercase English letters: ";
    cin >> input;

    // Validate the input string length
    if (input.length() != 10) {

        cout << "Invalid input. The string must be exactly 10 characters long." << endl;
        return 0;
    }

    // Check if all characters are lowercase English letters
    for (char c : input) {

        if (c < 'a' || c > 'z') {

            cout << "Invalid input. The string must contain only lowercase English letters." << endl;
            return 0;
        }
    }

    // Check if the letters are in ascending order
    if (isAscendingOrder(input)) {

        cout << "YES" << endl;
    }
    else {

        cout << "NO" << endl;
    }

    return 0;
}
