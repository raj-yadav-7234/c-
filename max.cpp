#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your marks";
    cin>>n;
    if (n>80)
    {
        cout<<"A";
    }
    else if (79>n>60)
    {
        cout<<"B";
    }
    
    else if (59>n>50)
    {
        cout<<"C";
    }
    
    else if (49>n>45)
    {
        cout<<"D";
    }
    
    else if (44>n>25)
    {
        cout<<"E";
    }
    else{
        cout<<"fail";
    }
    return 0;
    
}