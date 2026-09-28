#include <iostream>
using namespace std;

int main() {
    int number, sum=0;
    cout << "Enter the number: ";
    cin >> number;

    for(int i = 2; i <= number; i+=2) {
        sum = sum + i;
    }
    cout << "Even number Sum: " << sum << endl;
    return 0;
}