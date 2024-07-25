```
def spin_words(s):
    return ' '.join(word if len(word) <= 4 else word[::-1] for word in s.split())