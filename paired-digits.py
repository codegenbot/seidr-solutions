def sum_of_paired_digits(n):
    return sum(
        int(d) * 2 for d in str(n) if str(n).index(str(d)) + 1 == str(n).rfind(str(d))
    )