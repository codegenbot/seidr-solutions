#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float meltingRate) {
    return onTheGround + rate * hours - meltingRate * hours;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rate, meltingRate;
    cin >> onTheGround >> rate >> meltingRate;
    cout << fixed << setprecision(10);
    cout << snowDay(hours, onTheGround, rate, meltingRate) << endl;
    return 0;
}