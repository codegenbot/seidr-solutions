int charCount = 0;
for (char c : tweet) {
    if (c != ' ' && !isprint(c) && isalnum(c)) {
        charCount++;
    }
}