def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        word = word[::-1] if len(word) >= 5 else word
        result.append(word)
    return ' '.join(result)