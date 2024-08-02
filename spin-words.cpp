Here is the solution:

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
            result += str.substr(i - length, i - length + 1);
        } else {
            length++;
        }
    }
    result += str.substr(str.length() - length, length);

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            int start = i;
            while (i < result.length() && result[i] == ' ')
                i++;
            int end = i;
            string temp = result.substr(start, end - start);
            if (temp.length() >= 5)
                for (int j = temp.length() - 1; j >= 0; j--)
                    cout << temp[j];
            else
                cout << temp;
        } else {
            cout << result[i];
        }
    }

    return result;
}