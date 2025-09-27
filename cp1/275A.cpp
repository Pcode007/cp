#include<bits/stdc++.h>
using namespace std;

void rev(int& a){
    if(a==1) a=0;
    else a=1;
}

void apply(const vector<vector<int>>& inp,vector<vector<int>>&vec,int i,int j){
    if(inp[i][j]%2==1){
        if(j-1>=0) rev(vec[i][j-1]);
        if(j+1<3) rev(vec[i][j+1]);
        if(i-1>=0) rev(vec[i-1][j]);
        if(i+1<3) rev(vec[i+1][j]);
        rev(vec[i][j]);
    }
}

int main(){
    vector<vector<int>> vec= {{1,1,1},{1,1,1},{1,1,1}};
    vector<vector<int>> inp(3,vector<int>(3));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>inp[i][j];
            apply(inp,vec,i,j);
        }
    }

    for(int i=0;i<3;i++){
        cout<<vec[i][0]<<vec[i][1]<<vec[i][2]<<endl;
    }
    return 0;
}