string solveBoolean(string b) {
    stack<char> s;
    string result = "";
    
    for(int i=b.length()-1; i>=0; i--){
        if(b[i] == '&'){
            while(!s.empty() && s.top() == '&'){
                s.pop();
            }
            if(s.empty()){
                result = "False";
                break;
            }else{
                s.pop();
                if(s.top() == 'T')result = "True";
                else result = "False";
                break;
            }
        }else if(b[i] == '|'){
            while(!s.empty() && s.top() == '|'){
                s.pop();
            }
            if(s.empty()){
                result = "False";
                break;
            }else{
                s.pop();
                if(s.top() == 'T')result = "True";
                else result = "False";
                break;
            }
        }else{
            s.push(b[i]);
        }
    }
    
    while(!s.empty()){
        s.pop();
    }
    
    return result;
}