#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        sum+=(b-a);
        ans=max(ans,sum);
    }
    cout<<ans;
    return 0;
}