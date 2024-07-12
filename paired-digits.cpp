int pairedDigits(long long s) {
    int sum = 0;
    char c;
    do {
        c = s % 10;
        if (c * 2 >= 10)
            sum += (c / 10 + c % 10);
        else
            sum += c * 2;
        s /= 10;
    } while (s > 0);
    return sum;
}