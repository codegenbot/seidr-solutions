#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate;
        if(totalSnow > meltRate){
            totalSnow -= meltRate;
        } else {
            totalSnow = 0;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
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