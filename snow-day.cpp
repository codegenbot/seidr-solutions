int main() {
    int hours = 0;
    float initialSnow = 0.0f;
    float rateOfSnowFall = 0.0f;
    float meltingRate = 0.0f;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the initial snow on the ground (in feet): ";
    std::cin >> initialSnow;
    std::cout << "Enter the rate of snow fall per hour (in feet per hour): ";
    std::cin >> rateOfSnowFall;
    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> meltingRate;

    float currentSnow = snowAfterHours(hours, initialSnow, rateOfSnowFall, meltingRate);

    std::cout << "The amount of snow on the ground after " << hours << " hours is: " << currentSnow << " feet." << std::endl;

    return 0;
}

float snowAfterHours(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += rateOfSnowFall;
        if (currentSnow > 0)
            currentSnow -= meltingRate;
        else
            currentSnow = 0;
    }
    return currentSnow;
}