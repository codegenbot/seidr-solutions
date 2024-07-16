```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rateOfFall, float meltRate) {
    float result = groundSnow;
    for (int i = 0; i < hours; i++) {
        result += rateOfFall - meltRate;
    }
    return result;
}

int main() {
    int hours;
    cout << "Enter the number of hours: ";
    cin >> hours;
    float groundSnow, rateOfFall, meltRate;
    cout << "Enter initial amount of snow on ground (inches): ";
    cin >> groundSnow;
    cout << "Enter rate of snow fall per hour (inches): ";
    cin >> rateOfFall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltRate;
    
    float result = snowDay(hours, groundSnow, rateOfFall, meltRate);
    cout << "Amount of snow on ground after " << hours << " hours: " << fixed << setprecision(2) << result << " inches.\n";
    
    return 0;
}