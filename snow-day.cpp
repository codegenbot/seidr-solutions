#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow -= melt * (snow + rate);
    }

    cout << snow << endl;

    return 0;
}