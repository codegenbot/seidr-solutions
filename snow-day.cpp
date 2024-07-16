#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltingPerHour) {
    float totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        if (totalSnow > groundSnow) {
            float excess = totalSnow - groundSnow;
            totalSnow -= excess * (1 - meltingPerHour);
        } else {
            totalSnow *= (1 - meltingPerHour);
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float groundSnow, rateOfFall, meltingPerHour;
    cout << "Enter the initial amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> rateOfFall;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltingPerHour;
    
    float result = snowDay(hours, groundSnow, rateOfFall, meltingPerHour);
    cout << fixed << setprecision(10) << result << endl;
    
    return 0;
}