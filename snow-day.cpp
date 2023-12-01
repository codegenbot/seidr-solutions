#include <iostream>
using namespace std;

float calculateSnow(float hours, float snowGround, float snowFall, float meltingRate) {
    for (int i = 0; i < hours; i++) {
        snowGround += snowFall;
        snowGround -= snowGround * meltingRate;
    }
    return snowGround;
}

int main() {
    float hours, snowGround, snowFall, meltingRate;
    cin >> hours >> snowGround >> snowFall >> meltingRate;
    float result = calculateSnow(hours, snowGround, snowFall, meltingRate);
    cout << result << endl;
    return 0;
}