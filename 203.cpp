#include <bits/stdc++.h>
using namespace std;
int z,c,x;
string s;
main() {
cin>>z;
for(int i=0;i<z;i++) {
    cin>>s;
    c=s.size();
    x=s[c-1];
    if(x%2==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;
}
}
