```
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        result.append(' ' + ' '.join(reversed(word)) if len(word) > 4 else word)
    return " ".join(result)