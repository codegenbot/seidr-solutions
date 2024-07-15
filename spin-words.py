def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        elif len(word) == 4:
            result.append(word)
        else:
            result.append(word)
    return ' '.join(result)