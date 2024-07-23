#include <iostream>

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += (rate / 60); 
        if (onGround > 1024) { 
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround -= melt * onGround;
        }
    }
    return onGround;
}

int main() {
    int hours;
    float onGround, rate, melt;

    std::cin >> hours >> onGround >> rate >> melt;

    float result = snowDay(hours, onGround, rate, melt);

    std::cout << "After " << hours << " hours, there will be " << result << " cm of snow on the ground.\n";

    return 0;