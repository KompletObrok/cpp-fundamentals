#include <iostream>
#include <vector>


using namespace std;

int main() {

    char selection{};
    vector <int> numbers{1, 2, 3, 4, 5};


    do {

        cout << "P" << " - " << "Print numbers" << endl;
        cout << "A" << " - " << "Add numbers" << endl;
        cout << "M" << " - " << "Display mean of the numbers" << endl;
        cout << "S" << " - " << "Display the smallest number" << endl;
        cout << "L" << " - " << "Display the largest number" << endl;
        cout << "Q" << " - " << "Quit" << endl;
        cout << "=====================================================" << endl;
        cout << "Enter your choice: ";
        cin >> selection;

        switch (selection) {
            case 'P': case 'p':
                if (numbers.empty()) {
                    cout << "[] - Your list is empty.";
                }  else {
                    cout << "[ ";
                    for (auto num : numbers) {
                        cout << num << " ";
                    }cout << "]" << endl;
                }
                break;
            case 'A': case 'a':
            {
                int user_number{};
                cout << "Enter an integer to add to the list: ";
                cin >> user_number;
                numbers.push_back(user_number);
                cout << user_number << " has been added to the list." << endl;
                break;
            }
            case 'M': case 'm':
            {
                if (numbers.empty()) {
                    cout << "List empty, cant calculate" << endl;
                }else {
                    int sum{};
                    double mean_of_numbers{};
                    for (auto num : numbers) {
                        sum += num;
                        mean_of_numbers = static_cast<double>(sum) / numbers.size();
                    }
                    cout << "Mean of your numbers: " << mean_of_numbers << endl;
                }
                break;
            }
            case 'S': case 's':
            {
                if (numbers.empty()) { cout << "[] - Your list is empty." << endl; }

                int smallest_number = numbers[0];
                for (auto num : numbers) {
                    if (num < smallest_number) {
                        smallest_number = num;
                    }
                }
                cout << "Smallest number: " << smallest_number << endl;
                break;
            }
            case 'L': case 'l':
            {
                if (numbers.empty()) { cout << "[] - Your list is empty." << endl; }

                int largest_number = numbers[0];
                for (auto num : numbers) {
                    if (num > largest_number) {
                        largest_number = num;
                    }
                }
                cout << "Largest number: " << largest_number << endl;
                break;
            }
            case 'Q': case 'q':
                cout << "Exiting..." << endl;
                break;
                return 0;
            default:
                cout << "Invalid choice." << endl;
        }





    }while (selection != 'Q' && selection != 'q');








}


