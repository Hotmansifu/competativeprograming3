#include <bits/stdc++.h>
using namespace std;
long long z,x=1000000000, c=0;
int main(){
for(int i=1; i<=7; i++){

cin>>z;
if(z<x){
	x=z;
	c=i;
}
}
cout<<c;
}
