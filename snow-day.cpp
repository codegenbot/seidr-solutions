float calculateSnow(float hours, float snow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        snow = (snow + rate) * (1 - melt);
    }
    return snow;
}