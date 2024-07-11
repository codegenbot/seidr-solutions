int main(){
    string input_str;
    getline(cin, input_str);

    string output_str;
    string word = "";
    for(int i=0; i<input_str.length(); i++){
        if(input_str[i]==' '){
            if(word.length() >= 5){
                reverse(word.begin(), word.end());
            }
            output_str += word + " ";
            word = "";
        } else {
            word += input_str[i];
        }
    }
    if(word.length() >= 5){
        reverse(word.begin(), word.end());
    }
    output_str += word;

    cout << output_str << endl;

    return 0;
}