#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<map>
#include<set>
#include<stack>
#include<queue>

using namespace std;

#define INF (1<<29)
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define FOR(i,x,y) for(int i=(int)(x);i<=(int)(y);++i)
#define ROF(i,x,y) for(int i=(int)(x);i>=(int)(y);--i)
#define CLR(x,y) memset(x,y,sizeof(x))
#define eps 1e-6
#define  PI (3.1415926535897932384626433832795)

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	int cas=0;
	while(t--)
	{
		cas++;
		int n;
		cin>>n;
		int a[1005];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=INF;
		for(int i=1;i<=1000;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=a[j]/i;
				if(a[j]%i!=0)
					sum++;
			}
			ans=min(ans,sum+i);
		}
		cout<<"Case #"<<cas<<": "<<ans<<endl;
	}
	return 0;
}
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int t;
	cin>>t;
	int cas=0;
	while(t--)
	{
		cas++;
		int n;
		cin>>n;
		int a[1005];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ans=INF;
		for(int i=1;i<=1000;i++)
		{
			int sum=0;
			for(int j=0;j<n;j++)
			{
				sum+=a[j]/i;
				if(a[j]%i!=0)
					sum++;
			}
			ans=min(ans,sum+i);
		}
		cout<<"Case #"<<cas<<": "<<ans<<endl;
	}
	return 0;
}
