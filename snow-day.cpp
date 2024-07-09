```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    cout << "Enter the number of hours: " << std::ws;
    cin >> hours;
    
    float initialSnow;
    cout << "Enter the initial snow on the ground (in feet): ";
    cin >> initialSnow;
    
    float rateOfSnowFall;
    cout << "Enter the rate of snow fall per hour (in feet/hour): ";
    cin >> rateOfSnowFall;
    
    float proportionOfSnowMeltingPerHour;
    cout << "Enter the proportion of snow melting per hour: ";
    cin >> proportionOfSnowMeltingPerHour;

    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowFall;
        totalSnow -= initialSnow * proportionOfSnowMeltingPerHour;
    }
    
    cout << "The amount of snow on the ground after " << hours << " hours is: ";
    cout << std::fixed << std::setiosflags(std::ios_base::floatfield::fixed) << totalSnow << endl;

    return 0;
}