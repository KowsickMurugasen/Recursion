#include<iostream>
using namespace std;

int power(int x, int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result*=x;
    }
    return result;
}

int main(){
    int x,n;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Power: ";
    cin>>n;
    int result= power(x,n);
    cout<<"Result.."<<"\n";
    cout<<x<<" power of "<<n<<" is "<<result;
    return 0;
}
