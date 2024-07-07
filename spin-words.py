def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word.strip()) >= 5:
            result.append(word.strip()[::-1])
        else:
            result.append(word)
    return " ".join(result).rstrip()