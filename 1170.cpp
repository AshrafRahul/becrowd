#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count;
    float food;

    cin>>n;

    while(n--){
        cin>>food;
        count=0;

        while(food>1){
            count++;
            food=food/2;
        }
        cout<<count<<" dias"<<endl;
    }

    return 0;
}
