string solveBoolean(string expression) {
    stack<char> st;
    for(int i = 0; i < expression.length(); i++){
        if(expression[i] == '|'){
            if(st.top() == '&') return "False";
            else if(st.top() == 'T' || st.top() == 'F') st.pop();
        }else if(expression[i] == '&'){
            if(i == expression.length()-1) return "False";
        }else{
            st.push(expression[i]);
        }
    }
    return st.top() == 'T'? "True": "False";
}