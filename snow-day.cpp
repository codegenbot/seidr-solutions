float snowDay(int hours, float groundSnow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        groundSnow += rate;
        if (groundSnow > 0) {
            groundSnow -= melt;
        }
    }
    return groundSnow;
}