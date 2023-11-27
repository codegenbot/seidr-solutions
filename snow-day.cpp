float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        float newSnow = snowFallRate - (snowFallRate * snowMeltRate);
        snowOnGround += newSnow;
    }
    
    return snowOnGround;
}