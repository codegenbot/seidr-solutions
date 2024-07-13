int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowMeltRate * snowOnGround;
        if (snowOnGround < 0) {
            snowOnGround = 0;
        }
    }

    cout << snowOnGround << endl;

    return 0;
}