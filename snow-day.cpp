float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += (rate / 60); 
        if (onGround > 1024) { 
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround -= melt * onGround;
        }
    }
    return onGround;
}