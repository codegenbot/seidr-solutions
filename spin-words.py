def spin_words(sentence):
    words = sentence.split()
    new_words = []
    for word in words:
        if len(word.strip()) >= 5:
            new_words.append(word[::-1])
        else:
            new_words.append(word)
    return " ".join(new_words)