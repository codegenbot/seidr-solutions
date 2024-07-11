int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    cin >> n;
    vector<float> v2(n);
    for (int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    float result = 0.0;
    for (int i = 0; i < n; ++i) {
        result += pow(v1[i] - v2[i], 2);
    }
    result = sqrt(result);

    cout << result << endl;

    return 0;
}