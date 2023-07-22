#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x,y;
    int a,b;

    while(cin>>n && n!=0){
        x=y=0;
        while(n--){
            cin>>a>>b;

            if(a>b) ++x;
            else if(a<b) ++y;
        }
        cout<<x<<" "<<y<<endl;
    }


    return 0;
}
