def get_middle(s):
    s = s.replace(" ", "").lower()  # remove spaces and convert to lowercase
    if len(s) % 2 == 0:
        return s[len(s) // 2 - 1 : len(s) // 2 + 1]  # even length: return middle two characters
    else:
        return s[len(s) // 2]  # odd length: return middle character