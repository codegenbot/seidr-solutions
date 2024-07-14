int main() {
    float snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
        for (int i = 0; i < hours; i++) {
            initialSnow += rateOfSnowFall - initialSnow * proportionOfSnowMeltingPerHour;
        }
        
        return initialSnow;
    }

    int hours = 10;
    float initialSnow = 5.0f;
    float rateOfSnowFall = 1.0f;
    float proportionOfSnowMeltingPerHour = 0.2f;

    float result = snowDay(hours, initialSnow, rateOfSnowFall, proportionOfSnowMeltingPerHour);

    return 0;
}