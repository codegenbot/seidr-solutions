int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;

    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;

    for (int i = 0; i < hours; ++i) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowMeltingRate * snowOnGround;
        if (snowOnGround < 0.0) {
            snowOnGround = 0.0;
        }
    }

    cout << snowOnGround << endl;

    return 0;
}