```
def spin_words(s):
    words = s.split()
    new_words = [word[::-1] if len(word) >= 5 else word for word in words]
    return ' '.join(new_words)