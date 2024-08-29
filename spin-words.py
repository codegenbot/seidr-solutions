def spin_words(text):
    text = text.strip()
    words = text.split()
    result = " ".join(word if len(word) < 5 else word[::-1] for word in words)
    return result