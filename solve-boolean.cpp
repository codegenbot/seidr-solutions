using namespace std;

string solveBoolean(string s) {
    int res = s[0] == 'T';
    for(int i=1;i<s.length();i++){
        if(s[i]=='|') res|=s[i+1]=='T';
        else if(s[i]&1) res^=(bool)s[i+1]-'F';
        i+=s[i]=='F'? 0:1;
    }
    return res?"True":"False";
}