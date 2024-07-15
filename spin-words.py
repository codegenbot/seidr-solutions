def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(' '.join([c for c in word if c != ' '] + [word[::-1]]))
        else:
            result.append(word)
    return ' '.join(result)