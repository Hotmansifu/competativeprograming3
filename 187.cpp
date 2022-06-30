#include <iostream>
#include <algorithm>
using namespace std;
long long f,x[1000],c,n=1000;
int main() {
	cin>>f;
for(int i=0; i<f; i++){
	cin>>x[i];
}
sort(x, x+f);
for(int i=0; i<f; i++){
  c=x[i+1]-x[i];
  if(c<n && c>=0) n=c;	
}
cout<<n;
}
