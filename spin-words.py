def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        result.append(word[::-1])
    return " ".join(result)