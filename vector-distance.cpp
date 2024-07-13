double vectorDistance(int n) {
    float v1[n];
    float v2[n];

    for (int i = 0; i < n; i++) {
        cin >> v1[i] >> v2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = v2[i] - v1[i];
        sum += pow(diff, 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    cout << fixed << setprecision(10) << vectorDistance(n) << endl;

    return 0;
}