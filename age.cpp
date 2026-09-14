#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter age";
    cin>>n;
    if (n<18)
    {
        cout<<"Not eligible";
    }
    else if (n>=18)
    {
        cout<<"Eligible";
    }
    
    else if (n>=55 & n>=57)
    {
        cout<<"eligible for job, but retirement soon";
    }
    
    else{
        cout<<"retirement";
    }
    return 0 ;
    
    
}