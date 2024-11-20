#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		string str;
		cin>>str;

		bool check = true;

		if(str.length()%2==0){
			for(int i=0; i<str.length()/2; i++){
				if(str[i]!=str[i+str.length()/2]){
					check = false;
				}
			}
		}else{
			check = false;
		}

		if(check==false){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}

	}
	return 0;
}