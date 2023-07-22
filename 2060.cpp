#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int two=0, three=0, four=0, five=0;
    while(n--){
        int a;
        cin>>a;

        if(a%2==0) two++;
        if(a%3==0) three++;
        if(a%4==0) four++;
        if(a%5==0) five++;
    }
    cout<<two<<" Multiplo(s) de 2"<<endl;
    cout<<three<<" Multiplo(s) de 3"<<endl;
    cout<<four<<" Multiplo(s) de 4"<<endl;
    cout<<five<<" Multiplo(s) de 5"<<endl;

    return 0;
}
