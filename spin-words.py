def spin_words(text):
    return " ".join(word[::-1] if len(word) >= 5 else word for word in text.split())