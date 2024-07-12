int main() {
    int hours = 8; 
    float initialSnow = 10.0f;
    float snowFallRate = 2.5f;
    float meltPerHour = 1.0f;

    double totalSnow = snowDay(hours, initialSnow, snowFallRate, meltPerHour);

    std::cout << "Total snow: " << totalSnow << std::endl;

    return 0;
}

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