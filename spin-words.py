```
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(" ".join(word[::-1].split()))
        else:
            result.append(word)
    return " ".join(result)