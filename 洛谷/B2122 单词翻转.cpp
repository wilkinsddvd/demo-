#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	while(cin>>s){
		for(int i=s.size()-1;i>=0;i--)
			cout<<s[i];
		cout<<endl;
	}
	return 0;
}
