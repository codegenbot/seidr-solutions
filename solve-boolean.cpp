```
case '|': 
    processBar(s, i, result); 
    break; 

void processBar(string s, int& i, bool& result) {
    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                return;
            case 'F':
                i++;  
                result = false;
                return;
        }
        i++;
    }
    result = true; 
}