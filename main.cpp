#include <iostream>

using namespace std;

int validation_integer(int min,
                       int max);

int get_number();

int main() {
    int n = get_number();

    cout << "Factors of " << n << " are"; //for loop here because it's efficient - there is a clear starting point, it increments easily, and there is a
    // limiter, all in one line of code. A while loop could be used, but would be more lines of code and would potentially be more confusing.
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << " " << i;
        }
    }
    cout << endl;

    return 0;
}

int get_number() {
    cout << "Enter a positive integer: ";
    int min = 1;
    int max = 99999999;
    int num = validation_integer(min, max);
    return num;
}

int validation_integer(int min,
                       int max) //function to validate integers
{
    int number;
    cin >> number;
    while (!cin or (number < min) or //while loop here because there are 3 ways the user could mis-enter their number, any one of which negates their entry. I
    // need the loop to run until all 3
    // conditions are met ie the while condition becomes false.
           (number > max)) {
// Explain error not entering an integer
        cout
                << "I'm sorry that's not a valid entry. Please enter a number between "
                << min << " and " << max
                << ": ";
// Clear input stream
        cin.clear();
// Discard previous input
        cin.ignore(123, '\n');
        cin >> number;
        cout << endl;
    }
    return number;
}



