def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1] if len(word[::-1]) > 1 else word)
        else:
            result.append(word)
    return ' '.join(result)