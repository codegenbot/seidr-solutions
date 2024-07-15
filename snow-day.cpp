```cpp
#include <iostream>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    float result = groundSnow;
    for (int i = 0; i < hours; i++) {
        result += rate - melt;
    }
    return result;
}

int main() {
    int hours;
    float groundSnow, rate, melt;

    cin >> hours >> groundSnow >> rate >> melt;

    float result = snowDay(hours, groundSnow, rate, melt);

    cout << "The amount of snow on the ground after " << hours << " hours is: " << result << endl;
    return 0;
}