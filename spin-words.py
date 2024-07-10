```
def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append('' if len(word) < 5 else word[::-1])
        else:
            result.append(word)
    return ' '.join(result)