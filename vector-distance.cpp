#include <iostream>
#include <iomanip> 
using namespace std;

double vectorDistance(vector<float> v1, vector<float> v2) {
    double sum = 0;
    for(int i=0; i<v1.size(); i++) {
        sum += pow((v1[i] - v2[i]), 2);
    }
    return sqrt(sum);
}

int main() {
    int n;
    cin >> n;
    vector<float> vec1(n), vec2(n);
    
    for(int i=0; i<n; i++) {
        cin >> vec1[i];
    }
    for(int i=0; i<n; i++) {
        cin >> vec2[i];
    }

    cout << fixed << setprecision(10) << vectorDistance(vec1, vec2) << endl;
    
    return 0;
}