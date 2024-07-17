```cpp
#include <iostream>
using namespace std;

int main() {
    int hours;
    float snowOnGround, snowFallRate, meltRate;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter current snow on the ground (in meters): ";
    cin >> snowOnGround;
    cout << "Enter rate of snow fall per hour (in meters/hour): ";
    cin >> snowFallRate;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> meltRate;

    float newSnowOnGround = snowOnGround;

    for(int i = 0; i < hours; i++) {
        newSnowOnGround += snowFallRate - (meltRate * newSnowOnGround);
    }

    cout << "After " << hours << " hours, there will be " << newSnowOnGround << " meters of snow on the ground." << endl;

    return 0;
}