```c++
#include <iostream>
#include <iomanip>

using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall;
        totalSnow *= (1 - proportionOfMeltingPerHour);
    }
    return initialSnow + totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;
    cin >> initialSnow >> rateOfSnowfall >> proportionOfMeltingPerHour;
    
    cout << fixed; // Set the format to fixed
    cout << setprecision(6); // Specify the precision for the float value
    cout << snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour) << endl;
    return 0;
}