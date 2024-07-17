```cpp
#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, meltRate;
    
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the initial amount of snow: ";
    cin >> snow;
    cout << "Enter the rate of snow fall: ";
    cin >> rate;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> meltRate;

    float totalSnow = snow; // initial snow
    for(int i=0;i<hours;i++) {
        totalSnow += rate - meltRate; // add new snow and subtract melted snow
    }

    cout << "The amount of snow after " << hours << " hours is: " << totalSnow;
    
    return 0;
}