```
def spin_words(s):
    words = s.split()
    result = []
    for word in words:
        if len(word) >= 5:
            if word[0].lower() in 'aeiou':
                result.append(word[::-1])
            else:
                result.append(word[-1] + word[:-1][::-1])
        else:
            result.append(word)
    return " ".join(result)