float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    float previousSnowFall = 0;

    for (int i = 0; i < hours; i++) {
        float currentSnowFall = snowFallRate - (previousSnowFall * meltingRate);
        snowOnGround += currentSnowFall;
        previousSnowFall = currentSnowFall;
    }

    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    cout << calculateSnow(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}