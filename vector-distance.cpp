#include <vector>
using namespace std;

double calculateDistance(int n, vector<float> vec1, vector<float> vec2) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(vec1[i] - vec2[i], 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float &val : vec1) {
        cin >> val;
    }

    vector<float> vec2(n);
    for (float &val : vec2) {
        cin >> val;
    }

    double distance = calculateDistance(n, vec1, vec2);

    cout << fixed << setprecision(10) << distance << endl;

    return 0;
}