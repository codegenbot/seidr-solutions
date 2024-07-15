def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            half = (len(word)-1)//2
            result.append(' '.join([word[:half], word[half:][::-1]]))
        else:
            result.append(word)
    return ' '.join(result)