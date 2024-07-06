```
def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(' '.join(word[i-1::-1]) for i in range(len(word)))
        else:
            result.append(word)
    return " ".join(result)