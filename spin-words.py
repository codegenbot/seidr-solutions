def spin_words(text):
    words = text.split()
    reversed_words = " ".join(word[::-1] if len(word) >= 5 else word for word in words)
    return reversed_words