```c++
#include <iostream>

using namespace std;

int main() {
    int hours;
    double totalSnow = 0.0, groundSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour;

    cin >> hours >> groundSnow >> rateOfSnowFall >> proportionOfSnowMeltingPerHour; 
    totalSnow = groundSnow;

    for (int i = 0; i < hours; i++) {
        totalSnow += (rateOfSnowFall - proportionOfSnowMeltingPerHour * totalSnow);
    }

    cout << "The amount of snow on the ground after " << hours << " hours is: " << totalSnow;
    
    return 0;
}