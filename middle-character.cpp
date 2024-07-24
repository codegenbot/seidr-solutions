using namespace std;

string middleCharacter(string str) {
    int len = str.length();
    string result;

    if (len % 2 != 0) { 
        result = str.substr(len / 2 - 1, 1);
    } else { 
        result = str.substr((len / 2) - 1, 2);
    }

    return result;
}