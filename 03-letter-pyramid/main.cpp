#include <iostream>
#include <string>

using namespace std;

int main() {
    cout<<"Enter a string: " << endl;
    cout << "===========================================" << endl;

    string input;
    getline(cin, input);


    for (auto i = 0; i < input.length(); i++) {
        for (auto j = 0; j < input.length() - 1 - i; j++) { // standard for letter pyramid, decrease space for each row down
            cout << " ";
        }
        for (auto j = 0; j <= i; j++) {
            cout << input[j];
        }
        for (auto j = i - 1; j >= 0; j--) {
            cout << input[j]; // prints the string but backwards hence j needs to be >= 0, and we start from i - 1, since at this point i will be as high as possible, and we need just 1 less char
        }

        cout << endl;
    }

} // sibling for loops