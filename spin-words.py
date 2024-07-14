def spin_words(sentence):
    words = sentence.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5:
            if i > 0: 
                result.append(' ' + word[::-1])
            else:
                result.append(word[::-1])
        else:
            if i > 0:
                result.append(' ' + word)
            else:
                result.append(word)
    return " ".join(result)