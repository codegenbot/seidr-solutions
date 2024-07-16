std::string res = "";
    for (char c : "123") { 
        int num = c - '0';
        res += to_string(num * num);
    }
    cout << res << endl; 
    return 0;
}