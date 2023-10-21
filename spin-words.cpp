#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

#define INF 0x3fffffff
#define mem(a,b) memset(a,b,sizeof(a))
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
#define key_value ch[ch[root][1]][0]
#define test puts("OK");
#define pi acos(-1.0)
#define lowbit(x) ((x)&(-(x)))
#define DEB(x) cout<<" ----> "<<#x<<" = "<<x<<endl;
#define debug(x) cout<<" ----> "<<#x<<" = "<<x<<endl;
#define Clear(x,y) memset(x,y,sizeof(x))
#define MP make_pair
#define PB push_back
#define pii pair<int,int>
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
#define key_value ch[ch[root][1]][0]
#define test puts("OK");
#define pi acos(-1.0)
#define lowbit(x) ((x)&(-(x)))
#define DEB(x) cout<<" ----> "<<#x<<" = "<<x<<endl;
#define debug(x) cout<<" ----> "<<#x<<" = "<<x<<endl;
#define Clear(x,y) memset(x,y,sizeof(x))
#define MP make_pair
#define PB push_back
#define pii pair<int,int>

This is a test
sihT is a test

This is another test
sihT is rehtona test
*/
int main() {
    char str[100];
    cin.getline(str, 100);
    int len = strlen(str);
    char *ptr = str;
    char *prev = ptr;
    char *end = ptr;
    while(ptr < str+len){
        if(*ptr == ' ' || *ptr == '\0'){
            end = ptr-1;
            if(ptr-prev >= 5)
                while(prev < end){
                    swap(*prev, *end);
                    prev++;
                    end--;
                }
            prev = ptr+1;
        }
        ptr++;
    }
    cout << str << endl;
    return 0;
}
