#include <vector>
using namespace std;

double euclideanDistance(const vector<float>& vec1, const vector<float>& vec2) {
    double sum = 0;
    if(vec1.size() != vec2.size()) {
        return -1.0; // If vectors have different sizes, return -1.0
    }
    
    for(int i = 0; i < vec1.size(); ++i) {
        sum += pow((vec1[i] - vec2[i]), 2);
    }
    
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    
    vector<float> vec1(n);
    for(int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }
    
    vector<float> vec2(n);
    for(int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }
    
    double dist = euclideanDistance(vec1, vec2);
    cout << fixed << setprecision(10) << dist << endl;
    
    return 0;
}