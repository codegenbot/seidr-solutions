#include<iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    return snow;
}

int main() {
    return snowDay(0, 0.0, 0.0, 0.0);
}