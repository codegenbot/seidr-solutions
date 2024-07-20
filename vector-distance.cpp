#include <vector>
using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        // Check if vectors have the same length
        return -1.0;  // Return error value
    }

    double sum = 0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> v1(n);
    for (float &x : v1)
        cin >> x;

    cin.ignore();  // Ignore the newline character left over
    cin >> n;

    vector<float> v2(n);
    for (float &x : v2)
        cin >> x;

    cout << fixed << setprecision(10) << calculateEuclideanDistance(v1, v2) << endl;
    return 0;
}