int main() {
    int hours;
    float snow, rate, melting;
    cin >> hours >> snow >> rate >> melting;

    for (int i = 0; i < hours; ++i) {
        snow += rate;
        snow -= snow * melting;
    }

    cout << snow << endl;

    return 0;
}