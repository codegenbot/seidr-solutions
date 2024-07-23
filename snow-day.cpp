double snowDay(int hours, float initialSnow, float rateOfSnowfall, float proportionMelting) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfSnowfall; // add snow accumulation
        totalSnow *= (1 - proportionMelting); // apply melting
    }
    return totalSnow;
}