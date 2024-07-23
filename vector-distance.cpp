using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sumOfSquares = 0;
    for(int i = 0; i < v1.size(); i++) {
        double diff = v1[i] - v2[i];
        sumOfSquares += pow(diff, 2);
    }
    return sqrt(sumOfSquares / (double)v1.size());
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