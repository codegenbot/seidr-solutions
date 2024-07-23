```c++
#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += rate / 60;
        if (onGround > 1024) {
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround -= melt * onGround;
        }
    }
    return onGround;
}

int main() {
    int hours;
    float onGround, rate, melt;

    cout << "Enter number of hours: ";
    cin >> hours;
    cout << "Enter amount of snow on the ground (in inches): ";
    cin >> onGround;
    cout << "Enter snow fall rate per minute: ";
    cin >> rate;
    cout << "Enter proportion of snow melting per hour: ";
    cin >> melt;

    float result = snowDay(hours, onGround, rate / 60.0f, melt);
    cout << "Amount of snow on the ground after " << hours << " hours is: " << result << "\n";

    return 0;
}