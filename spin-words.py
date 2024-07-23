def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1] + " " if len(word) >= 5 else word + " ")
    return "".join(result).strip()