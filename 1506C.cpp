#include<bits/stdc++.h>
using namespace std;

int solve(string a, string b, int x, int y){
    int ans = 0;

    vector<vector<int>>v(x+1,vector<int>(y+1,0));

    for(int i=1;i<=x;i++){
        for(int j=1; j<=y; j++){
            if(a[i-1]==b[j-1]){
                v[i][j]=v[i-1][j-1]+1;
                ans = max(v[i][j],ans);
            }
        }
    }
    return ans;
} 

int main(){
    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;

        int x = a.length();
        int y = b.length();

        int m = x-solve(a,b,x,y);
        int n = y-solve(a,b,x,y);

        cout<<m+n<<endl;
    }
    return 0;
}