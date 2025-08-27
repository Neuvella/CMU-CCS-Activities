// Activity 2
// Directions: Create a 5-number program that adds their total sum

#include <iostream>
using namespace std;
int main () {

    int n1, n2, n3, n4, n5, sum;

    cout << "Enter a number for num1: ";
    cin >> n1;
    cout << "Enter a number for num2: ";
    cin >> n2;
    cout << "Enter a number for num3: ";
    cin >> n3;
    cout << "Enter a number for num4: ";
    cin >> n4;
    cout << "Enter a number for num5: ";
    cin >> n5;

    sum = n1 + n2 + n3 + n4 + n5;

    cout << "The total sum of num1 to num5 is " << sum;
    
    return 0;
}