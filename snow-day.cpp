double snowDay(int hours, float initialSnow, float rateOfSnowFall, float proportionOfSnowMeltingPerHour) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        double melted = totalSnow * proportionOfSnowMeltingPerHour;
        totalSnow -= melted;

        double add = rateOfSnowFall - melted;
        if (std::abs(add) > 0.01)
            totalSnow += add;
    }
    
    return totalSnow;
}