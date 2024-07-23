```
def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        result.append(' ' + word[::-1] if len(word) > 4 else word)
    return " ".join(result)