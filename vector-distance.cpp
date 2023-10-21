#include <bits/stdc++.h>
using namespace std;

/*

*/
int main() {
    int n;
    cin>>n;
    vector<double> vec1;
    vector<double> vec2;
    for(int i=0;i<n;i++)
    {
        double temp;
        cin>>temp;
        vec1.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        double temp;
        cin>>temp;
        vec2.push_back(temp);
    }
    double distance=0;
    for(int i=0;i<n;i++)
    {
        distance+=pow((vec1[i]-vec2[i]),2);
    }
    distance=sqrt(distance);
    cout<<fixed<<setprecision(17)<<distance;
}
