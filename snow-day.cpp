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

int main() {
    int hours;
    float snowOnGround, rateOfSnow, proportionOfSnowMelting;
    cin >> hours >> snowOnGround >> rateOfSnow >> proportionOfSnowMelting;
    float snow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnow;
        if (snow > 0)
            snow -= snow * proportionOfSnowMelting;
    }
    printf("%.10f\n", snow);
    return 0;
}
