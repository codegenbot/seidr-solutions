int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec2[i] - vec1[i], 2);
    }

    float result = sqrt(sum);
    cout << result << endl;

    return 0;
}