Here's the solution:

string spinWords(string sentence) {
    string result = "";
    int i;
    for(i=0; i < sentence.length(); i++){
        if(sentence[i] == ' '){
            result += " ";
        } else if(i+1 >= sentence.length() || (i+1 < sentence.length() && (sentence[i+1] == ' '))){
            string word = "";
            while(i < sentence.length() && (sentence[i] != ' ')) {
                word += sentence[i];
                i++;
            }
            if(word.length() > 4)
                result += std::string(word.rbegin(), word.rend());
            else
                result += word;
        }
    }
    return result;
}