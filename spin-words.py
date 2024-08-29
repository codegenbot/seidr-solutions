def spin_words(sentence):
    words = [word.strip('.,?!') for word in sentence.split()]
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)