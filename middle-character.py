def middle_character(s):
    mid = len(s) // 2
    return s[mid] if len(s) % 2 else s[mid - 1 : mid + 1]


if __name__ == "__main__":
    s = input().strip()
    print(middle_character(s))