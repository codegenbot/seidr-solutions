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
1                                                                     1
50.0                                                                 50.0
output:
0.0                                                                   0.0
input:
1                                                                     1
50.0                                                                 50.0
1                                                                     1
10.0                                                                 10.0
output:
45.0                                                                 45.0
input:
2                                                                     2
20.0 20.0                                                            20.0 20.0
2                                                                     2
100.0 50.0                                                            100.0 50.0
output:
10.0                                                                 10.0
input:
2                                                                     2
20.0 20.0                                                            20.0 20.0
2                                                                     2
20.0 0.0                                                              20.0 0.0
output:
36.0                                                                 36.0
input:
3                                                                     3
10.0 20.0 30.0                                                       10.0 20.0 30.0
3                                                                     3
5.0 10.0 95.0                                                         5.0 10.0 95.0
output:
29.0                                                                 29.0
*/
int main() {
#ifdef BEN_CHIU
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int num, a1, a2;
    float price[21], percent[21], sum;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%f", price + i);
    }
    scanf("%d", &a1);
    for (int i = 0; i < a1; i++) {
        scanf("%f", percent + i);
    }
    for (int i = 0; i < num; i++) {
        if (percent)
        sum += price[i] * percent[i]/100.0;
    }
    printf("%f\n", sum);

    return 0;
}
