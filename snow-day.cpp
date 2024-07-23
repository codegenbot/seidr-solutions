#include <iostream>

using namespace std;

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour, newSnow;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    newSnow = rateOfSnowFall;

    for (int i = 0; i < hours; i++) {
        totalSnow += newSnow - proportionOfSnowMeltingPerHour * totalSnow;
        newSnow *= (1 - proportionOfSnowMeltingPerHour);
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}