def spin_words(s):
    words = s.split()
    result = []
    if len(words) == 1 and len(words[0]) >= 5:
        return words[0][::-1]
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)