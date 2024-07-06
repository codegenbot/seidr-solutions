def spin_words(text):
    words = text.split()
    result = " ".join(reversed(word[::-1] if len(word) >= 5 else word for word in sorted(words, key=len)))
    return result