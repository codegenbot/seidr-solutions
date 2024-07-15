def spin_words(text):
    result = []
    words = text.split()
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return ' '.join(result).strip()

print(spin_words("This is a test string."))