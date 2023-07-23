#include<bits/stdc++.h>
using namespace std;

long long int factorial(int n){
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}

int main(){
    long long int a,b;
    while(cin>>a>>b){
        long long int sum = factorial(a)+factorial(b);
        cout<<sum<<endl;
    }

    return 0;
}
