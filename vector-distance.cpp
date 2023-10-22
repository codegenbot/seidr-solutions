/*
Given two n-dimensional vectors of floats, return the Euclidean distance between the two vectors in n-dimensional space.
*/
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

// 方法一：欧式距离，计算每一个点的距离
// 方法二：曼哈顿距离，每一个点的距离相加
// 方法三：切比雪夫距离，v1和v2比较，选择较大的那个
// 方法四：一致性距离，先比较v1和v2的一致性，再相加
// 方法五：夹角余弦
// 方法六：比较相似度，比较v1和v2的相似度
// 方法七：比较绝对值，v1和v2相减后的绝对值相加
// 方法八：自定义，定义一个函数，然后求该函数的近似值
// 方法九：随机方法，随机函数来求值

// 方法一：欧式距离，计算每一个点的距离
int getDistance(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) return -1;
    int n = v1.size();
    double res = 0.0;
    for (int i = 0; i < n; ++i) {
        res += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    return sqrt(res);
}

int main() {
    vector<int> v1({1, 2, 3});
    vector<int> v2({4, 5, 6});
    int res = getDistance(v1, v2);
    cout << res << endl;
    return 0;
}
