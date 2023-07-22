#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    while(cin>>n){
        double a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        double shortest = a[0];
        for(i=0; i<n; i++){
            if(a[i]<shortest){
                shortest = a[i];
            }
        }
        cout<<shortest<<endl;
    }

    return 0;
}
