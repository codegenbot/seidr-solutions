int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround = (snowOnGround + snowFallRate) * (1 - snowMeltRate);
    }

    cout << snowOnGround << endl;

    return 0;
}