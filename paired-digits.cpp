string s; 
int sum = 0; 
for (char c : s) {
    if (!s.empty() && s[s.length()-1] != c) {
        continue;
    }
    sum += c - '0'; 
}
return sum;