#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    return (groundSnow + rate * hours - meltRate * hours);
}

int main() {
    int hours;
    cout << "Enter number of hours: ";
    cin >> hours;
    
    float groundSnow, rate, meltRate;
    cout << "Enter initial amount of snow on the ground: ";
    cin >> groundSnow;
    cout << "Enter rate of snow fall per hour: ";
    cin >> rate;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltRate;

    float result = snowDay(hours, groundSnow, rate, meltRate);

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}