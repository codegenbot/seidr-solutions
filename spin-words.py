def spin_words(s):
    words = s.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    if result:
        return ' '.join(result).strip()
    else:
        return ' '.join(result)