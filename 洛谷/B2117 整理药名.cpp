#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>s;
		if(s[0]>='a'&&s[0]<='z')
			s[0]-=32;
		for(int j=1;j<=s.size()-1;j++)
			if(s[j]>='A'&&s[j]<='Z')
				s[j]+=32;
		cout<<s<<endl;
	}
	return 0;
}
