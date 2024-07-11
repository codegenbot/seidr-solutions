if (idx != string::npos && cipher2.find(c) == string::npos) {
    c = cipher2[idx];
} else if (idx != string::npos && cipher1.find(c) == string::npos) {
    c = cipher1[idx];
} else {
    // Handle characters not found in either cipher
    // Leave them unchanged in the output
}