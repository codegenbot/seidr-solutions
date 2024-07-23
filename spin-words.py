def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        word = ''.join(filter(str.isalpha, word))  # filter out non-alphabetic characters
        if len(word) >= 5:
            word = word[::-1]
        result.append(word)
    return ' '.join(result)