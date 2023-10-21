#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

double vec[1005], ans;

int main() {
    int n;
    cin>>n;
    vector<double> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>n;
    vector<double> b(n);
    for(int i=0;i<n;i++)
        cin>>b[i];
    double sum = 0;
    for(int i=0;i<a.size();i++)
        sum += (a[i]-b[i])*(a[i]-b[i]);
    printf("%.16f\n", sqrt(sum));
    return 0;
}
