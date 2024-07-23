float snowDay(int hours, float onGround, float rate, float melt) {
    float total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate / 100 * (i + 1); // add new snow every hour
        if (total > onGround) {
            total -= (total - onGround);
        } else {
            total *= (1 - melt); // calculate melting after adding new snow
        }
    }
    return total;
}