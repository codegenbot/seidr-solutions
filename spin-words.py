def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        result.append(word[::-1] + " " if len(words) > 1 else "")
    return "".join(result).strip().rstrip(" ")