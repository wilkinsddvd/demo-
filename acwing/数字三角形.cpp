#include<iostream>
using namespace std;

int a[200][200],c[200][200],n;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	c[1][1] = a[1][1];
	for(int i=2;i<=n;i++)
		for(int j=1;j<=i;j++)
			c[i][j] = a[i][j]+max(c[i-1][j],c[i-1][j-1]);
	cout<<max(c[n][(n+1)/2],c[n][(n+1)/2]);
	return 0; 
}
