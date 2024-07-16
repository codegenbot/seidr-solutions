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

    cout << "Amount of snow on ground after " << std::to_string(hours) << ".";
    cout << "\nThe amount of snow is " << std::to_string(snowOnGround);
    cout << " inches.\n";

    return 0;
}