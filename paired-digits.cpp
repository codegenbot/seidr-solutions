string s;
int sum = 0;
for (char c : s) {
    if (!s.empty() && s[s.length()-1] == c) continue;
    for(int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]) {
            sum += s[i] - '0';
        }
    }
    return sum;