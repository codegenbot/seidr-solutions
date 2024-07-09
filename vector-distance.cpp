#include <vector>
#include <cmath>
#include <stdexcept>

using namespace std;

double vectorDistance(const vector<float>& v1, const vector<float>& v2) {
    if(v1.size() != v2.size()) {
        throw runtime_error("Vectors of different sizes");
    }
    
    double sum = 0;
    for (int i = 0; i < v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    vector<float> v1 = {1.0, 2.0, 3.0};
    vector<float> v2 = {4.0, 5.0, 6.0};
    try {
        double distance = vectorDistance(v1, v2);
        cout << "The Euclidean distance is: " << distance << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1; 
    }
    return 0;
}