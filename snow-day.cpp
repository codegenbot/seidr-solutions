#include <iostream>
using namespace std;

double totalSnow = 0;

int hours;
cin >> hours;

double groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;
cin >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

for (int i = 0; i < hours; ++i) {
    totalSnow += (rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow);
}

cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;