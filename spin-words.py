def spin_words(string):
    words = string.split()
    for i, word in enumerate(words):
        if len(word) >= 5:
            words[i] = word[::-1]
    return ' '.join(words)