#include <vector>
using namespace std;

double calculateEuclideanDistance(int n, vector<float> vec1, vector<float> vec2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n), vec2(n);

    for (int i = 0; i < n; i++) {
        cin >> vec1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    double distance = calculateEuclideanDistance(n, vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}