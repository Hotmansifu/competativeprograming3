#include <bits/stdc++.h>
using namespace std;
long long a,b,c=1;
int main(){
	cin>>a>>b;
	for(int i=1; i<=b; i++){
	 c=c*a%10;		
	}
	cout<<c%10;
}
