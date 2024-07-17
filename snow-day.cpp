```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        float newSnow = totalSnow + rate - min(totalSnow + rate, meltRate);
        totalSnow = newSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;

    float groundSnow, rate, meltRate;
    cout << "Enter initial amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter the rate of snow fall per hour: ";
    cin >> rate;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltRate;

    float finalSnow = snowDay(hours, groundSnow, rate, meltRate);

    cout << "Amount of snow on the ground after " << hours << " hours: " << finalSnow << endl;

    return 0;
}