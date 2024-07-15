def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(' '.join([word[:len(word)-5]] + [' ' + word[::-1] + ' '] + [word[len(word)-5:]]))
        else:
            result.append(word)
    return ' '.join(result)