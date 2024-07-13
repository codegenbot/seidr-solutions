def spin_words(text):
    if len(text.strip()) == 1:
        return text
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)