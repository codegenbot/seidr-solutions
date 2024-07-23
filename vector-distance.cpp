int main() {
    int n;
    cin >> n;
    vector<double> vec1(n);
    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    cin >> n;
    vector<double> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += (vec1[i] - vec2[i]) * (vec1[i] - vec2[i]);
    }

    double euclideanDistance = sqrt(sum);
    cout << euclideanDistance << endl;

    return 0;
}