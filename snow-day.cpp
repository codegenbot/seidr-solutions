int main() {
    int hours = 5;
    float initialSnow = 10.0f;
    float rateOfSnowFall = 2.0f;
    float proportionOfSnowMeltingPerHour = 0.1f;
    
    double totalSnow = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);
    
    std::cout << "Total Snow: " << totalSnow << std::endl;
    
    return 0;
}