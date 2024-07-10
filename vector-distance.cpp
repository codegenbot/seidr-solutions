#include <vector>
using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        return -1.0;  // Return -1.0 for invalid input
    }

    double sum = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }

    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float& f : vec1) {
        cin >> f;
    }

    vector<float> vec2(n);
    for (float& f : vec2) {
        cin >> f;
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}