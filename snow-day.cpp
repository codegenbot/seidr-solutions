#include <iostream>

using namespace std;

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        double newTotalSnow = groundSnow + rateOfSnowFall - proportionOfSnowMeltingPerHour * groundSnow;
        totalSnow = newTotalSnow;
        groundSnow = newTotalSnow; 
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;

    return 0;
}