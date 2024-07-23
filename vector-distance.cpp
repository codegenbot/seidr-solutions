double vectorDistance(vector<float> v1, vector<float> v2) {
    double distance = 0;
    int n = v1.size();
    for(int i = 0; i < n; i++) {
        distance += pow(v1[i] - v2[i], 2);
    }
    return sqrt(distance / (n * 1.0));
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n), v2(n);

    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    double result = vectorDistance(v1, v2);
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}