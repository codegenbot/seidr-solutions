for (char &c : message) {
    size_t idx = cipher1.find(c);
    if (idx != string::npos) {
        c = cipher2[idx];
    } else {
        idx = cipher2.find(c);
        if (idx != string::npos) {
            c = cipher1[idx];
        } else {
            // Character not found in either cipher strings, leave it unchanged
        }
    }
}