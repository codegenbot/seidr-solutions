int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<double> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    double distance = 0.0;
    for (int i = 0; i < n; ++i) {
        distance += pow(vec1[i] - vec2[i], 2);
    }

    distance = sqrt(distance);
    
    cout << distance << endl;

    return 0;
}