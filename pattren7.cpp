#include<iostream>
using namespace std;
void pattren1( int n){
    for(int i=1; i<=n; i++){
        for(int j= 1; j<n-i+1; j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    pattren1(n);
}