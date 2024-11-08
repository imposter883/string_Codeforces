#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;

	string word = "hello";

	int index = 0;

	for(char c: str){
		if(c==word[index]){
			index++;
		}

		if(index==word.length()){
			break;
		}
	}

	if(index==word.length()){
		cout<<"YES";
	}else{
		cout<<"NO";
	}

	return 0;
}