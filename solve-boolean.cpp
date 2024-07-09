using namespace std;

string solveBoolean(string s) {
    string result = "True";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') return "False";
        else if (s[i] == '&') {
            while (i > 0 && s[i - 1] == '&') i--;
            int left = 0, right = 0;
            for (; i < s.length() && s[i] != '|'; i++) {
                if (s[i] == 'T') right++;
                else left++;
            }
            i--;
            result = (left > right) ? "False" : "True";
        } else if (s[i] == '|') {
            int left = 0, right = 0;
            for (; i < s.length() && s[i] != '&'; i++) {
                if (s[i] == 'T') right++;
                else left++;
            }
            i--;
            result = (left > right) ? "True" : "False";
        }
    }
    return result;
}