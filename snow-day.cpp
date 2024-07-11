#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float totalSnow = groundSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rate - melt;
    }
    return totalSnow;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    
    float groundSnow, rate, melt;
    cout << "Enter initial snow (in): ";
    cin >> groundSnow;
    cout << "Enter rate of snow fall per hour (in/hr): ";
    cin >> rate;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);
    
    cout << "Total snow after " << hours << " hours: " << result << endl;
    return 0;
}