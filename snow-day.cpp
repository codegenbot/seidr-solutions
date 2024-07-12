int main() {
    int hours = 8; // adjust this as needed
    float initialSnow = 10.0f;
    float snowFallRate = 2.5f;
    float meltPerHour = 1.0f;

    double totalSnow = snowDay(hours, initialSnow, snowFallRate, meltPerHour);

    std::cout << "Total snow: " << totalSnow << std::endl;

    return 0;
}