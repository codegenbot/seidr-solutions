def spin_words(string):
    words = string.split()
    for i in range(len(words)):
        if len(words[i]) > 4:
            words[i] = words[i][::-1]
    return ' '.join(words)