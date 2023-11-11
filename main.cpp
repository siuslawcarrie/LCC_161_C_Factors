/*Factors of a Positive Integer
 * Carrie Bailey
 * Due: 10/22/2023
 * Completed: 11/10/2023
 * Version 1.0
 * Description:
 * • Use a loop to ask the user to input a positive integer. If the integer is not positive, tell the user it isn’t valid.
Continue until you get a positive integer. Note: 0 is not positive.
• Use a 2nd type of loop which calculates the factors of the integer and display them.
• Your solution should use 2 different loop types. Use comments in your solution to explain why you chose
each loop type.
 */
#include <iostream>

using namespace std;

int validation_integer(int min,
                       int max);//function declaration to validate positive integer

int get_number();//function declaration to ask user to input a positive integer

int main() {
    //VARIABLES
    int n = get_number();//assign variable n to positive integer
    //END VARIABLES
    //DISPLAY LINE 27 & 31
    cout << "Factors of " << n << " are";
    for (int i = 1; i <= n; ++i) {//for loop here because it's efficient - there is a clear starting point, it increments easily, and there is a
        // limiter, all in one line of code. A while loop could be used, but would be more lines of code and would potentially be more confusing.
        if (n % i == 0) {
            cout << " " << i;
        }
    }
    cout << endl;

    return 0;
}
//FUNCTION DEFINITIONS
int get_number() {//get user number
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
    //END FUNCTIONS
    return number;
}



