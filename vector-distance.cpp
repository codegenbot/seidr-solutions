int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    char comma;
    cin >> comma;

    vector<float> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    float sum = 0.0;
    for (int i = 0; i < max(vec1.size(), vec2.size()); ++i) {
        float diff = (i < vec1.size() ? vec1[i] : 0.0) - (i < vec2.size() ? vec2[i] : 0.0);
        sum += diff * diff;
    }

    float result = sqrt(sum);
    cout << result << "\n";

    return 0;
}