def spin_words(text):
    words = text.split()
    if all(len(word) < 5 for word in words):
        return text
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return ' '.join(result)