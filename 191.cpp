#include <bits/stdc++.h>
using namespace std;
int a[1001],ans,z,x,n;
int main(){
	cin>>n;
	for(int i=0; i<n; i++)
	cin>>a[i];
	n--;
	while(n>=0){
		while(a[n]==1 & n>=0){
			z++; n--;
		}
		while(a[n]==0 && n>=0){
			x++; n--;
			
		}
		if(x>z) ans++;
		x=0; z=0;
	}
	cout<<ans;
}
