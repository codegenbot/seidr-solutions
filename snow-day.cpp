#include <iostream>
using namespace std;

float snowDay(int hours, float onTheGround, float rate, float meltingPerHour) {
    float total = onTheGround;
    
    for (int i = 0; i < hours; i++) {
        total += rate;
        total -= total * meltingPerHour / 100.0f;
    }
    
    return total;
}

int main() {
    int hours;
    cin >> hours;
    float onTheGround, rate, meltingPerHour;
    cin >> onTheGround >> rate >> meltingPerHour;
    cout << fixed << setprecision(6) << snowDay(hours, onTheGround, rate, meltingPerHour) << endl;
    return 0;
}