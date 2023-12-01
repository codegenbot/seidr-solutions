float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - (meltRate * finalSnow);
        finalSnow = finalSnow + snowFall;
        if (finalSnow < 0) {
            finalSnow = 0;
        }
        finalSnow = finalSnow - (meltRate * finalSnow); // Updated line
    }
    return finalSnow;
}