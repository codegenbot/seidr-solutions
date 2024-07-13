string squareDigits(string n) {
    string res = "";
    for(int i=0; i<n.size(); i++){
        int num = (n[i]-'0');
        res += to_string(num * num);
    }
    return res;
}