if (cipher1.find(curr_char) != string::npos) {
            deciphered_message += cipher2[cipher1.find(curr_char)];
        } else if (cipher2.find(curr_char) != string::npos) {
            deciphered_message += cipher1[cipher2.find(curr_char)];
        } else {
            // Leave unchanged characters not found in either cipher
        }