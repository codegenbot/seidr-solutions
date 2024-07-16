```cpp
#include <iostream>
float snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionOfMeltingPerHour) {
    float newTotalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        newTotalSnow = newTotalSnow + rateOfSnowfall - proportionOfMeltingPerHour * newTotalSnow;
    }
    return newTotalSnow;
}
int main() { return 0; }