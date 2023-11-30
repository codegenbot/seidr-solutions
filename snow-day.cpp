double calculateSnow(float hours, double snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        double snowFall = (snowFallRate * hours) - (meltRate * snowOnGround);
        snowOnGround = snowFall >= 0 ? snowOnGround + snowFall : 0;
    }
    return snowOnGround;
}