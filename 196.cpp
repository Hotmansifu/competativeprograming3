#include <bits/stdc++.h>
using namespace std;
int z,x,c;
string s;
main() {
cin>>s;
x=s.size();
for (int i=0; i<x; i++) {
if (s[i]=='@' && s[i+1]=='@') {cout<<"A"; i++; }
else cout<<s[i];
}
}

