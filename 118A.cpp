#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    cin >> str;
 
    int n = str.length();
 
    
    for(int i = 0; i < n; i++){
        str[i] = tolower(str[i]);
    }
 
    
    for(int j = 0; j < str.length(); j++){
        if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'y'){
            str.erase(j, 1);
            j--;
        }
    }
 
    string s = "";
    for(int k=0; k<str.length(); k++){
        s +=".";
        s+=str[k];
    }
 
    cout<<s<<endl;
 
    return 0;
}