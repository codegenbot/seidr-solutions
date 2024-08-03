string squareDigits(string n) {
    string res = "";
    for(int i=0; i<n.length(); i++){
        int num = (int)(n[i] - '0'); // convert char to integer
        res += to_string(num * num); // concatenate squared digit
    }
    return res;
}