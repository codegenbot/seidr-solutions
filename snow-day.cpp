```cpp
#include <iostream>
#include <string>
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

    float result = snowOnGround + rateOfSnowFall * hours - proportionMeltingPerHour * hours;

    string str_hours = to_string(hours);
    string str_result = to_string(result);

    cout << "Amount of snow on ground after " << str_hours << " inches.\n";

    return 0;
}