#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float melt_amount = melt * snow;
        snow += rate;
        snow -= melt_amount;
    }

    cout << snow << endl;

    return 0;
}