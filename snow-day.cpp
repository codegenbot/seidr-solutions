int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow;
    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, 0, 0) << endl;
    return 0;
}