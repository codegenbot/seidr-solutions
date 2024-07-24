def spin_words(s):
    words = s.split()
    spun_words = [word[::-1] if len(word) >= 5 else word for word in words]
    return " ".join(spun_words)