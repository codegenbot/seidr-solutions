#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
*/
int main() {
    //printf("%0.2f\n", (double)234/100);
    int x,y;
    while(cin>>x){
        vector<double> v1(x,0);
        vector<double> v2(x,0);
        for(int i=0;i<x;i++) cin>>v1[i];
        cin>>y;
        for(int i=0;i<y;i++) cin>>v2[i];
        double res=0;
        for(int i=0;i<x;i++){
            double discount=v2[i]/100;
            res+=v1[i]*(1-discount);
        }
        printf("%.2f\n",res);
        
    }
    return 0;
}
