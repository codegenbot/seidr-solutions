```
#include <iostream>
#include <cmath>
using namespace std;

double snow_day(int hours, float ground, float rate, float melt) {
    double amount = 0.0;
    for (int i = 0; i < hours; i++) {
        amount += ground + rate * (1 - pow(melt, i));
    }
    return amount;
}

int main() {
    int hours;
    float ground, rate, melt;
    cin >> hours >> ground >> rate >> melt;
    cout << snow_day(hours, ground, rate, melt) << endl;
    return 0;
}
```