#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase for case-insensitivity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    if (isalpha(character)) {
        if (isVowel(character)) {
            cout << character << " is a vowel." << endl;
        } else {
            cout << character << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet character." << endl;
    }
    cout << "220130318021";
    return 0;
}
