def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(word[1:] + word[0] + " " + word[::-1].rstrip())
        else:
            result.append(word)
    return ' '.join(result)