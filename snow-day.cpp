float snowDay(int hours, float initialSnow, float snowFall, float meltRate) {
    return initialSnow + ((snowFall - meltRate) * hours);
}