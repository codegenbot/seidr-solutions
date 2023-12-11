#include <iostream>
using namespace std;

double snowDay(int hours, double groundSnow, double fallRate, double meltRate) {
    double totalSnow = 0;
    for (int i = 1; i <= hours; i++) {
        totalSnow += fallRate * i;
        if (totalSnow > groundSnow) {
            totalSnow -= (totalSnow - groundSnow) * meltRate;
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    double groundSnow, fallRate, meltRate;
    cin >> hours >> groundSnow >> fallRate >> meltRate;
    cout << snowDay(hours, groundSnow, fallRate, meltRate) << endl;
    return 0;
}