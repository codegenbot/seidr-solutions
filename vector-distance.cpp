int main() {
    int n;
    cin >> n;
    vector<float> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    int m;
    cin >> m;
    vector<float> vec2(m);
    for (int i = 0; i < m; ++i) {
        cin >> vec2[i];
    }

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    float distance = sqrt(sum);
    cout << distance << endl;

    return 0;
}