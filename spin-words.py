```
def spin_words(s):
    words = s.split()
    reversed_words = ' '.join(word[::-1] if len(word) >= 5 else word for word in words)
    return ' '.join(reversed_words.split())