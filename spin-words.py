```
def spin_words(text):
    words = text.split()
    original = ' '.join(word for word in words)
    reversed_words = ' '.join(word[::-1] if len(word) >= 5 else word for word in words)
    return f"{original} {reversed_words}".strip()