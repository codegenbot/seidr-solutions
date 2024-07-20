def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        word = ''.join(c for c in word if c.isalpha())
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return ' '.join(result)