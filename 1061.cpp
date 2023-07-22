#include<bits/stdc++.h>
using namespace std;
int main(){
    string temp;
    int d,h,m,s,dd,hh,mm,ss;

    cin>>temp>>d;
    cin>>h>>temp>>m>>temp>>s;
    cin>>temp>>dd;
    cin>>hh>>temp>>mm>>temp>>ss;

    s = ss-s;
    m = mm-m;
    h = hh-h;
    d = dd-d;

    if(s<0){
        s+=60;
        m--;
    }
    if(m<0){
        m+=60;
        h--;
    }
    if(h<0){
        h+=24;
        d--;
    }

    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;

    return 0;
}
