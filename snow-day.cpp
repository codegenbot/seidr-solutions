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

float snowfall(int hours, float initial, float rate, float meltingRate) {
    if(hours == 0) {
        return initial;
    }
    float rate1 = rate - meltingRate;
    float snow = initial + rate1 + snowfall(hours - 1, initial, rate1, meltingRate);
    return snow;
}

int main() {
    int hours;
    float initial, rate, meltingRate;
    cin >> hours >> initial >> rate >> meltingRate;
    cout << snowfall(hours, initial, rate, meltingRate) << endl;
    return 0;
}
