float snowDay(int hours, float onGround, float rate, float melt) {
    float total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > onGround) {
            total -= (total - onGround);
        } else {
            total -= melt * (total - onGround);
        }
    }
    return total;
}