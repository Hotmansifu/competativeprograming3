#include <bits/stdc++.h>
using namespace std;
int i,z,x,c,t;
string s;
int main(){
for(i=0; i<10; i++){
	cin>>z>>x;
	c=c+z;
	t=t+x;
if(c>=50 && t>=50) {cout<<"BOTH"; return 0;}
if(c>=50) {cout<<"FIRST"; return 0;} else
if(t>=50) {cout<<"SECOND"; return 0;}
}
if(c<50 && t<50) cout<<"NO ONE";
}

