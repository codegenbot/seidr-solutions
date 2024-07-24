int main() {
    int hours;
    float snow, snowFall, meltRate;
    cin >> hours >> snow >> snowFall >> meltRate;

    for (int i = 0; i < hours; i++) {
        snow += snowFall;
        snow -= snow * meltRate;
    }

    cout << snow;

    return 0;
}