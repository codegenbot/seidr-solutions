```
def spin_words(s):
    words = s.split()
    spun = ' '.join(word[::-1] if len(word) >= 5 else word for word in words)
    return " ".join(spun.split())