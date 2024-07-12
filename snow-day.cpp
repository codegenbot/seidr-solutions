#include <iostream>
using namespace std;

int main() {
    int hours;
    float snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;

    float final_snow = snow;
    for (int i = 0; i < hours; ++i) {
        final_snow = final_snow + rate - melt * final_snow;
    }

    cout << final_snow << endl;

    return 0;
}