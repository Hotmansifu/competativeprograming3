#include <bits/stdc++.h>
using namespace std;
int a[101],k,z,c,i,n;
main(){
cin>>n;
for (i=0; i<n; i++){
    cin>>a[i];
    }
for (i=0; i<n; i++){
    cin>>k;
    if (k<a[i]) z++; 
    if (k>a[i]) c++;
    }
    if (c<z)  cout<<"Nana"; 
    if (c>z)  cout<<"Kote";
    if (c==z) cout<<"Draw";
}
