#include <bits/stdc++.h>
using namespace std;
int z,x,c,mx;
string s,zoma;
int main(){
	cin>>z;
	for(int i=0; i<z; i++){
		cin>>s;
		c=s.size();
		if (c>mx){ mx=c; zoma=s;}	
	else {
	if (c == mx && s<zoma) zoma=s;
}
}
cout<<zoma;
}
