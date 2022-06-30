#include <bits/stdc++.h>
using namespace std;
int i,z,x[10000],c;
string s;
int main(){
cin>>z;
double k[z];
double l[z];
double r;
for(i=0; i<z; i++){
	cin>>k[i];	
	}
for(i=0; i<zs; i++){
	cin>>l[i];
	}
	reverse(l,l+z);
	for(i=0;i<z;i++) {
		if(k[i]+l[i]>r) {
			r=k[i]+l[i];
			c=i;
		}
	}
	cout<<c+1<<" "<<fixed<<setprecision(1)<<r;
}