#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        int open=0,close=0,pair=0;

        for(auto i:str){
            if(i=='('){
                open++;
            }else if(i==')'){
                if(open>0){
                    open--;
                    pair++;
                }
            }
        }

        int ans = n/2-pair;

        cout<<ans<<endl;
    }

    return 0;
}