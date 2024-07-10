#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float meltingRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        onTheGround += rate;
        onTheGround -= onTheGround * meltingRate;
    }
    return onTheGround;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rate, meltingRate;
    cin >> onTheGround >> rate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, onTheGround, rate, meltingRate) << endl;
    return 0;
}