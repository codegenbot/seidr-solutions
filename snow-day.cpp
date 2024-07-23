float snowDay(int hours, float onGround, float rate, float melt) {
    for(int i = 0; i < hours; i++) {
        onGround = onGround + rate; 
        onGround -= melt;
    }
    return onGround;
}