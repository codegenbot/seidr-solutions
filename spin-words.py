```
def spin_words(text):
    words = text.split()
    result = " ".join(word[::-1] if len(word) >= 5 else word + (" " if i < len(words) - 1 and len(word) < 5 else "") for i, word in enumerate(words))
    return result