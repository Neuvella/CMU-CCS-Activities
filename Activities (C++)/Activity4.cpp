// Activity 4
// Directions: Create a program that uses the if statement to ask the user what arithmetic operation to use, input three numbers, and ask if they want to return back to main

#include <iostream>
using namespace std;
int main () {

  float n1, n2, n3, tl;
  int art;
  char back;

    cout << "There are 5 basic Arithmetic Operators:" << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "[5] EXIT" << endl;
    cout << "Choose a number [1-5]: ";
    cin >> art;
  
  if (art==1) {
        cout << "Pick a number: ";
        cin >> n1;
        cout << "Pick a number: ";
        cin >> n2;
        cout << "Pick a number: ";
        cin >> n3;
        tl = n1 + n2 + n3;
        cout << "Your total sum is: " << tl << endl;
    }
    if (art==2) {
        cout << "Pick a number: ";
        cin >> n1;
        cout << "Pick a number: ";
        cin >> n2;
        cout << "Pick a number: ";
        cin >> n3;
        tl = n1 - n2 - n3;
        cout << "Your total diff is: " << tl << endl;
    }
    if (art==3) {
        cout << "Pick a number: ";
        cin >> n1;
        cout << "Pick a number: ";
        cin >> n2;
        cout << "Pick a number: ";
        cin >> n3;
        tl = n1 * n2 * n3;
        cout << "Your total product is: " << tl << endl;
    }
    if (art==4) {
        cout << "Pick a number: ";
        cin >> n1;
        cout << "Pick a number: ";
        cin >> n2;
        cout << "Pick a number: ";
        cin >> n3;
        tl = n1 / n2 / n3;
        cout << "Your total quotient is: " << tl << endl;
    }
    if (art==5) {
        exit(5);
    }

    cout << "Would you like to try another operation? [Y/N] ";
    cin >> back;
    
    if (back=='Y' || back=='y') {
        main(); 
    }
    if (back=='N' || back=='n') {
        exit(5);
    }
  
  return 0;

}
