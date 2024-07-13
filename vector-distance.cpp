int main() {
    int n;
    cin >> n;
    vector<float> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cin >> n;
    vector<float> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    float distance = 0;
    for (int i = 0; i < n; i++) {
        distance += (v1[i] - v2[i]) * (v1[i] - v2[i]);
    }
    distance = sqrt(distance);

    cout << distance << endl;

    return 0;
}