```cpp
double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow -= totalSnow * proportionMeltingPerHour; 
        totalSnow += rateOfSnowfall; 
    }
    
    return totalSnow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnowfall, proportionMeltingPerHour;

    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter initial snow: ";
    std::cin >> initialSnow;
    std::cout << "Enter rate of snowfall: ";
    std::cin >> rateOfSnowfall;
    std::cout << "Enter proportion melting per hour: ";
    std::cin >> proportionMeltingPerHour;

    double result = snowDay(hours, initialSnow, rateOfSnowfall, proportionMeltingPerHour);
    std::cout << "Total Snow: " << result << std::endl;

    return 0;
}