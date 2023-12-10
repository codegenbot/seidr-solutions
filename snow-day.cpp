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

double snow_day(int hours, float ground_snow, float rate_of_snow_fall, float proportion_of_snow_melting) {
    double current_snow = ground_snow;
    for (int i = 0; i < hours; i++) {
        current_snow += rate_of_snow_fall * (1 - proportion_of_snow_melting);
        current_snow -= proportion_of_snow_melting * current_snow;
    }
    return current_snow;
}