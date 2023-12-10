#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double hours;
    cin >> hours;
    double snowOnGround;
    cin >> snowOnGround;
    double rateOfSnowfall;
    cin >> rateOfSnowfall;
    double proportionOfMeltingPerHour;
    cin >> proportionOfMeltingPerHour;
    cout << snowOnGround + (hours * rateOfSnowfall) - (proportionOfMeltingPerHour * hours);
    return 0;
}