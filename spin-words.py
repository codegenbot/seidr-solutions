def spin_words(s):
    words = s.split()
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = words[i][::-1]
    return " ".join(words)