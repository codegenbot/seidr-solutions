int main() {
    int hours = 0;
    float initialSnow = 0.0f;
    float rateOfFall = 0.0f;
    float meltRate = 0.0f;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow on the ground: ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (in inches): ";
    std::cin >> rateOfFall;

    std::cout << "Enter the proportion of snow melting per hour (as a percentage): ";
    std::cin >> meltRate;

    double result = snowDay(hours, initialSnow, rateOfFall, meltRate);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << result << " inches." << std::endl;

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