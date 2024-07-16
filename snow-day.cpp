```cpp
#include <iostream>
using namespace std;

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionMeltingPerHour, totalSnow = 0; 

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter initial amount of snow on ground (inches): ";
    cin >> snowOnGround;
    cout << "Enter rate of snow fall per hour (inches): ";
    cin >> rateOfSnowFall;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> proportionMeltingPerHour;

    for (int i = 0; i < hours; i++) {
        float newSnow = rateOfSnowFall - proportionMeltingPerHour * snowOnGround;
        totalSnow += newSnow; 
        snowOnGround += newSnow;
    }

    cout << "Amount of snow on ground after " << hours << " hours.\n";
    cout << "The amount of snow is " << std::fixed << std::setprecision(2) << snowOnGround << " inches.\n";

    return 0;
}