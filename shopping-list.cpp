#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main(){
    int n;cin>>n;
    double a[n+1],sum=0;
    for(int i=1;i<=n;i++){scanf("%lf",&a[i]);}
    for(int i=1;i<=n;i++){sum+=a[i];}
    printf("%.2lf",sum);
}
