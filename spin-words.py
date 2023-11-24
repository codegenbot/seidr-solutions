def spin_words(sentence):
    words = sentence.split()
    for i in range(len(words)):
        if len(words[i]) >= 5 and words[i].isalpha():
            words[i] = words[i][::-1]
    return ' '.join(words)