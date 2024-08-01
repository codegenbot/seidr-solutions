#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength);
            wordLength = i + 1;
            if(result[result.length() - 1] == ' ')
                result = result.substr(0, result.length() - 1);
        }
    }
    result += str.substr(wordLength);

    string temp = "";
    for (int i = 0; i < result.length(); i++) {
        temp = (result[i] == ' ') ? temp + " " : temp;
        if ((result[i] >= 'a' && result[i] <= 'z') || (result[i] >= 'A' && result[i] <= 'Z')) {
            if (result[i + 1] >= 'a' && result[i + 1] <= 'z')
                i++;
        }
    }

    string final = "";
    int j = temp.length() - 1;
    for (int i = temp.length() - 1; i >= 0; i--) {
        if (!ispunct(temp[i])) {
            final += temp[i];
        } else {
            final = temp[i] + final;
        }
    }

    int k = 0;
    for(int i=0;i<final.length();i++){
        if(final[i]>='A' && final[i]<='Z'){
            final[k++] = 'a';
        }else{
            final[k++] = final[i];
        }
    }

    string spin = "";
    bool found = false;
    int count = 0;
    for(int i=0;i<final.length();i++){
        if(final[i] == ' '){
            if(count > 4) {
                for (int j = i; j >= 0; j--) {
                    spin += final[j];
                }
                found = true;
            } else
                spin += " ";
            count = 0;
        }else{
            spin += final[i];
            count++;
        }
    }

    if(!found)
        return result;

    string res = "";
    for(int i=spin.length()-1;i>=0;i--){
        res+=spin[i];
    }

    return (res.length() == 0)?result:res;
}