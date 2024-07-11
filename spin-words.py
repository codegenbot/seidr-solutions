def spin_words(text):
    words = text.split()
    result = [word[::-1] if len(word) >= 5 else word for word in words]
    return ' '.join(result)