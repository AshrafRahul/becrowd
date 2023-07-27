#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    while(cin>>m>>n && m!=0 && n!=0){
        int ticket[100000] = {0};
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            ticket[a]++;
        }
        int count=0;
        for(int i=1; i<=m; ++i){
            if(ticket[i]>1) count++;
        }
        cout<<count<<endl;
    }


    return 0;
}
