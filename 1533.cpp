#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,pos,max,max1;
    while(cin>>n && n){
        int a[n];
        max = max1 = pos = 0;

        for(i=0; i<n; i++){
            cin>>a[i];

            if(max<a[i]) max = a[i];
        }
        for(i=0; i<n; i++){
            if(max1<a[i] && a[i]!=max){
                max1 = a[i];
                pos = i;
            }
        }

        cout<<pos+1<<endl;
    }

    return 0;
}
