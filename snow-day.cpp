#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    float finalSnow = snow;
    for (int i = 0; i < hours; ++i) {
        finalSnow += rate;
        finalSnow -= melt * snow;
    }

    cout << finalSnow << endl;

    return 0;
}