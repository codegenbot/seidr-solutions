```cpp
#include <iostream>
using namespace std;

float calculateSnow(float hours, float snow, float rate, float melt) {
    for (float i = 0; i < hours; i++) {
        snow += rate;
        snow -= melt * snow;
    }
    return snow;
}

int main() {
    float hours, snow, rate, melt;
    cin >> hours >> snow >> rate >> melt;
    float result = calculateSnow(hours, snow, rate, melt);
    cout << result << endl;
    return 0;
}
```