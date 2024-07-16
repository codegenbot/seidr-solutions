```cpp
#include <iostream>
using namespace std;

int main() {
    int hours;
    float snowOnGround, rateOfSnowFall, proportionMeltingPerHour; 

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
        snowOnGround += newSnow;
    }

    cout << "Hours: " << hours << "\n";
    cout << "The amount of snow is " << fixed << setprecision(2) << snowOnGround << " inches.\n";

    return 0;
}