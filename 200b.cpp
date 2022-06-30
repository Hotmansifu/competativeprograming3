#include <bits/stdc++.h>
using namespace std;
int n,m,x,i;
double y;
main(){
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&x);
		y=y+x;
	}
	printf("%.4f",y/n);
}
