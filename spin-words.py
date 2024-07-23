def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5 and not word.startswith('px'): 
            word = word[::-1]
        result.append(word)
    return ' '.join(result)