//decimal to binary conversion

#include <iostream>
#include <cmath>
using namespace std;

//decimal to binary conversion (method 1)
int decimalToBinary1(int n){
    int ans=0,rem=0,count=0;
    while(n!=0){
        rem=n%2;
        ans+=rem*pow(10,count);
        count++;  //count will store exponent value
        n/=2;
    }
    return ans;
}

//decimal to binary conversion (method 2)
int decimalToBinary2(int n){
    int ans=0,count=1;
    while(count<=n){
        count*=2;
    }
    count/=2;
    while(count>0){
        int rem=n/count;
        n-=rem*count;
        count/=2;
        ans= ans*10+rem;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n(decimal): ";
    cin>>n;

    cout<<"binary of "<<n<<" is: "<<decimalToBinary1(n)<<endl;
    cout<<"binary of "<<n<<" is: "<<decimalToBinary2(n)<<endl;
    return 0;
}