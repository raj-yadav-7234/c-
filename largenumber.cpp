#include <iostream>
using namespace std;

int main() 
{
    int array [] = {13,43,56,11,99};
    int largest = array[0];
    if(largest < array[1])
    {
       largest = array[1];
    }
    cout << "The largest number is: " << largest << endl;
    if(largest < array[2])
    {
       largest = array[2];
    }
    cout << "The largest number is: " << largest << endl;
    if(largest < array[3])
    {
       largest = array[3];
    }
    cout << "The largest number is: " << largest << endl;
    if(largest < array[4])
    {
       largest = array[4];
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}