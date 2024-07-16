int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionOfMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow (inches): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour (inches): ";
    std::cin >> rateOfSnowfall;

    std::cout << "Enter the proportion of melting per hour: ";
    std::cin >> proportionOfMeltingPerHour;

    float result = snowDay(hours, initialSnow, rateOfSnowfall, proportionOfMeltingPerHour);

    std::cout << "After " << hours << " hours, there will be " << result << " inches of snow." << std::endl;

    return 0;
}