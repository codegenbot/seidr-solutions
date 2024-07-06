double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; // subtract melting
        totalSnow += rateOfSnowfall; // add new snowfall
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the initial snow amount (in cm): ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snowfall (in cm/hour): ";
    std::cin >> rateOfSnowfall;

    std::cout << "Enter the proportion of melting per hour: ";
    std::cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);

    std::cout << "Total snow after " << hours << " hours is: " << result << " cm" << std::endl;

    return 0;
}