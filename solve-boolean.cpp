using namespace std;

std::string solveBoolean(std::string s) {
    int result = (s[0] == 'T') ? 1 : 0;
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == '&') {
            if(result == 1 && s[i+1] == 'T') result = 1;
            else if(result == 1 || s[i+1] == 'F') result = 0;
        } 
        else if(s[i] == '|') {
            if(result == 1) result = 1;
            else if(result == 0 && s[i+1] == 'T') result = 1;
            else if(result == 0 || s[i+1] == 'F') result = 0;
        } 
    }
    return (result) ? "True" : "False";
}