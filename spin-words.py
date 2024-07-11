```
def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    print(" ".join(result))