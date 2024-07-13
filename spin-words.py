```Python
def spin_words(sentence):
    words = sentence.split()
    for i in range(len(words)):
        if len(str(words[i]).strip()) >= 5:
            words[i] = str(words[i]).strip()[::-1]
    return " ".join([word for word in words if not (len(word) < 5)])