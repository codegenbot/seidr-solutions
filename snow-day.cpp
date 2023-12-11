```c++
float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    for (int i = 0; i < static_cast<int>(hours); i++) {
        initialSnow += snowFallRate;
        initialSnow -= initialSnow * meltingRate;
    }
    return initialSnow;
}
```