#include <iostream>
using namespace std;

int main()
{
    int array[] = {10, 25, 7, 42, 18};

    int largest = array[0];
    int smallest = array[0];

    for(int i = 1; i < 5; i++)
    {
        if(largest < array[i])
        {
            largest = array[i];
        }
    }
    cout << "The largest number is: " << largest<< endl;
    for(int i = 1; i < 5; i++)
    {
        if(smallest > array[i])
        {
            smallest = array[i];
        }
    }

    cout << "The smallest number is: " << smallest<< endl;

    return 0;
}