def spin_words(s):
    return " ".join([w[::-1] if len(w) >= 5 else w for w in s.split()])