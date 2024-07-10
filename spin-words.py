def spin_words(text):
    words = text.split()
    return " ".join([word[::-1] if len(word) >= 5 and len(word) > 1 else word for word in words])