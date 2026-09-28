#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if (number == 0)
    {
        cout << "The number is zero." << endl;
    }
    else if (number > 0)
    {
        cout << "The number is positive." << endl;
    }
    else
    {
        cout << "The number is negative." << endl;
    }
    
   
    return 0;
}