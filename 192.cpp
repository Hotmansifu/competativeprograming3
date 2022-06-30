#include <bits/stdc++.h>
  using namespace std;
  int n,i,x,maxz,max1;
  int t[1000];
 main(){
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        t[x]++;
    }
    for(i=0; i<10;i++){
        if(t[i]>maxz){
            maxz=t[i];
            max1=i;
        }
    }
    cout<<max1;
  }
    
    
