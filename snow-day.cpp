float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += rate / 60.0;
        if (onGround > 0) {
            onGround -= min(onGround, onGround * melt);
        } else {
            onGround = 0;
        }
    }
    return onGround;
}