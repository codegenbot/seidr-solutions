def spin_words(text):
    words = text.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            if i > 0:
                result.append(' ')
            result.append(word)
    return ''.join(result)