def spin_words(s):
    words = s.split()
    result = " ".join(" ".join(word[::-1] if len(word) >= 5 else word for word in w.split()) or w for w in words)
    return result