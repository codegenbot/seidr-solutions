
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t,i,j,k,l,m,n;
	cin>>t;
	while(t--){
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		ll max=0;
		for(i=0;i<n;i++){
			if(a[i]>max)
				max=a[i];
		}
		ll dp[max+1];
		for(i=0;i<max+1;i++)
			dp[i]=0;
		for(i=0;i<n;i++)
			dp[a[i]]++;
		for(i=0;i<max+1;i++){
			if(dp[i]!=0){
				for(j=0;j<dp[i];j++)
					cout<<i<<" ";
			}
		}
		cout<<"\n";
	}
}
