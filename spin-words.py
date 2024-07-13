def spin_words(sentence):
    words = sentence.split()
    for i in range(len(words)):
        if len(words[i].strip()) >= 5:
            words[i] = words[i][::-1]
    return " ".join(words)