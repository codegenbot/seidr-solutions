int main() {
    int hours;
    float snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltRate * snowOnGround;
        if (snowOnGround < 0) {
            snowOnGround = 0;
        }
    }

    cout << snowOnGround << endl;

    return 0;
}