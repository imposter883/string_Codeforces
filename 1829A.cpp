#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	string s = "codeforces";

	while(t--){
		string str;
		cin>>str;

		int count=0;

		for(int i=0; i<s.length(); i++){
			if(s[i]!=str[i]){
				count++;
			}
		}

		cout<<count<<endl;
	}

	return 0;
}