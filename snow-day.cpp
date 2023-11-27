float calculateSnow(float hours, float initialSnow, float snowFallRate, float snowMeltRate) {
    float snowOnGround = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snowOnGround = snowOnGround + snowFallRate - (snowOnGround * snowMeltRate);
    }
    
    return snowOnGround;
}