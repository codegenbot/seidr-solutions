#include <vector>
using namespace std;

double calculateEuclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    if (vec1.size() != vec2.size()) {
        return -1;  // or throw an exception or handle this case in any other way you prefer
    }

    double distance = 0.0;
    for (int i = 0; i < vec1.size(); i++) {
        distance += pow((vec1[i] - vec2[i]), 2);
    }

    return sqrt(distance);
}

int main() {
    int n;
    cin >> n;

    vector<float> vec1(n);
    for (float& val : vec1) {
        cin >> val;
    }

    vector<float> vec2(n);
    for (float& val : vec2) {
        cin >> val;
    }

    double distance = calculateEuclideanDistance(vec1, vec2);

    cout.setf(ios::fixed);
    cout.precision(10); // or any other precision you prefer
    cout << distance << endl;

    return 0;
}