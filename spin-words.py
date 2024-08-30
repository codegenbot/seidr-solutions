def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        word = word.strip()
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result)