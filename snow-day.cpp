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

    double result = snowDay(hours, initialSnow, rateOfFall / 100.0, meltRate / 100.0);

    std::cout << "Final amount of snow: " << result << " cm\n";

    return 0;
}