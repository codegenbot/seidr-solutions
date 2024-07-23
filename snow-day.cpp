#include <iostream>

using namespace std;

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour, newSnow;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        totalSnow += newSnow - proportionOfSnowMeltingPerHour * totalSnow;
        newSnow = groundSnow + newSnow - proportionOfSnowMeltingPerHour * newSnow;
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}