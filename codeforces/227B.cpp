#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int> ma;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ma[x]=i;
    }
    int m;
    long long int c=0,s=0;
    cin>>m;
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        c+=ma[b]+1;
        s+=n-ma[b];
    }
    cout<<c<<" "<<s<<endl;
    return 0;
}