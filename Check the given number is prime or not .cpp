#include<iostream>
using namespace std;

bool prime(int n){
    if(n<=1)
    return 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(prime(n))
    cout<<"It is a prime number.";
    else
    cout<<"It is not a prime number.";
    return 0;
}
