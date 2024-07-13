def spin_words(s):
    words = s.split()
    return " ".join([word[::-1] if len(word) >= 5 else word for word in words])