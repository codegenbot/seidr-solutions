float snowDay(int hours, float groundSnow, float rate, float melt) {
    float result = groundSnow;
    for (int i = 0; i < hours; i++) {
        result += rate;
        result -= melt;
    }
    return result;
}