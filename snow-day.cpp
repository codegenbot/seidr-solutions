#include <iostream>
#include <string>

std::string snowDay(int hours, float onGround, float rate, float melt) {
    std::string s = "";
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
    s = std::to_string(onGround);
    return s;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}