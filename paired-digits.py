def paired_digits_sum(digits):
    return sum(
        int(digits[i]) for i in range(len(digits) - 1) if digits[i] == digits[i + 1]
    )


if __name__ == "__main__":
    digits = input().strip()
    print(paired_digits_sum(digits))