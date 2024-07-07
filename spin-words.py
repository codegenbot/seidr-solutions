```
def spin_words(text):
    words = text.split()
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = words[i][::-1]
        else:
            words[i] = words[i]
    return " ".join(words)