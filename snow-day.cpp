#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow *= (1 - melt);
        snow += rate;
    }

    cout << snow << endl;

    return 0;
}