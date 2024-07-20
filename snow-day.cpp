```cpp
double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    return snow;

}

int main() {
    int hours = 5; // number of hours
    float initialSnow = 10.0f; // initial amount of snow on the ground
    float rateOfFall = 2.0f; // rate at which snow falls
    float meltRate = 1.5f; // proportion of snow that melts per hour

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);
    std::cout << "Amount of snow on the ground after " << hours << " hours: " << result << std::endl;

    return 0;
}