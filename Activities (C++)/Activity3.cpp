// Activity 3
// Directions: Create a Program that lets you enter your name and your prelim, midterm, and final scores and their total average

#include <iostream>
using namespace std;
int main () {

    char name[45];
    float prelim, midterm, final, total;

    cout << "Enter your name: ";
    cin.getline(name,45);
    cout << "Enter your prelim score: ";
    cin >> prelim;
    cout << "Enter your midterm score: ";
    cin >> midterm;
    cout << "Enter your final score: ";
    cin >> final;

    total = prelim + midterm + final / .5;

    cout << name << endl;
    cout << "Your total average is: " << total;

    return 0;
}