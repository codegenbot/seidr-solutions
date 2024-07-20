```cpp
int main() {
    int hours;
    float initialSnow, rateOfFall, meltRate;

    std::cout << "Enter number of hours: ";
    std::cin >> hours;

    std::cout << "Enter initial snow (in cm): ";
    std::cin >> initialSnow;

    std::cout << "Enter rate of snow fall per hour (in cm/h): ";
    std::cin >> rateOfFall;

    std::cout << "Enter proportion of snow melting per hour (%): ";
    std::cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);

    std::cout << "Final amount of snow: " << result << " cm\n";

    return 0;
}

double snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltRate / 100.0);
    }
    return snow;
}