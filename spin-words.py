def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
        result.append(' ')
    return ' '.join(result).strip()