```cpp
#include <iostream>
#include <iomanip>
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

    float result = round(snowOnGround + rateOfSnowFall * hours - proportionMeltingPerHour * hours);

    cout << "Amount of snow on ground after " << hours << " hours: " << fixed << setprecision(2) << (float)result << " inches.\n";

    return 0;
}