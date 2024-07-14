```
def spin_words(s):
    words = s.split()
    result = ' '.join(word if len(word) < 5 else word[::-1] for word in words)
    return result