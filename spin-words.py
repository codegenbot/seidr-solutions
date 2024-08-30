```
def spin_words(sentence):
    if len(sentence) <= 1:
        return sentence[::-1]
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)