int main() {
    vector<float> x1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float val;
        cin >> val;
        x1.push_back(val);
    }
    
    vector<float> x2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        float val;
        cin >> val;
        x2.push_back(val);
    }
    
    double distance = vectorDistance(x1, x2);
    cout << "Euclidean distance: " << fixed << setprecision(5) << distance << endl;
    return 0;
}