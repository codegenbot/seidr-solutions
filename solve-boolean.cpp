```
bool solveBoolean(string s) {
    bool res = false;
    string term;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '|') {
            bool subRes = evaluateTerm(term);
            res = res || subRes;
            term = "";
        } 
        else if (c == 't' || c == 'f') {
            if (c == 't') term += 't';
            else if (c == 'f') term += 'f';
        }
        else if (c == '&') {
            bool subRes = evaluateTerm(term);
            res = res && subRes;
            term = "";
        }
    }
    bool subRes = evaluateTerm(term);
    res = res || subRes;

    return res;
}

bool evaluateTerm(string term) {
    bool res = true;
    for (int i = 0; i < term.length(); i++) {
        char c = term[i];
        if (c == '&') {
            if (term[i+1] == 't' && term[i+2] == 't') res = true;
            else if ((term[i+1] == 't' && term[i+2] == 'f') || 
                     (term[i+1] == 'f' && term[i+2] == 't') || 
                     (term[i+1] == 'f' && term[i+2] == 'f')) res = false;
            i++;
        } 
        else if (c == 't' || c == 'f') {
            continue;
        }
    }
    return res;
}