```cpp
double snowDay(int hours, float initialSnow, float snowFallRate, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (totalSnow > 0) {
            totalSnow -= meltPerHour;
        }
    }
    return totalSnow;

}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltPerHour;

    std::cout << "Enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Enter the initial amount of snow on the ground: ";
    std::cin >> initialSnow;

    std::cout << "Enter the rate of snow fall per hour: ";
    std::cin >> snowFallRate;

    std::cout << "Enter the proportion of snow melting per hour: ";
    std::cin >> meltPerHour;

    double totalSnow = snowDay(hours, initialSnow, snowFallRate, meltPerHour);

    std::cout << "The amount of snow on the ground after the given hours is: " << totalSnow << std::endl;

    return 0;
}