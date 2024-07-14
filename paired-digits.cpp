int main() {
    string str;
    int sum = 0;
    cin >> str;
    for(int i=0; i < str.length() - 1; i++) { 
        if(str[i] == str[i+1]) { 
            sum += (str[i]-'0'); 
            i++; // increment index
        }
    }
    cout << sum << endl;
    return 0;
}