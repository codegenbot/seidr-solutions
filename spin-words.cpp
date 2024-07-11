int main() {
    string input, word, output;
    getline(cin, input);
    
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word + " ";
    }
    
    output.pop_back();  // Remove extra space at the end
    cout << output << endl;
    
    return 0;
}