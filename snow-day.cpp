int main() {
    int hours;
    float snowOnGround, snowFallRate, snowMeltingRate;
    cin >> hours >> snowOnGround >> snowFallRate >> snowMeltingRate;

    float snowOnGroundAfter = snowOnGround;
    for (int i = 0; i < hours; ++i) {
        snowOnGroundAfter += snowFallRate;
        snowOnGroundAfter -= snowOnGroundAfter * snowMeltingRate;
        if (snowOnGroundAfter < 0.0) {
            snowOnGroundAfter = 0.0;
        }
    }

    cout << snowOnGroundAfter << endl;

    return 0;
}