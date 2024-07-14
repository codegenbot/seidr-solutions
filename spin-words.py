def spin_words(sentence):
    words = sentence.split()
    spun = [word[::-1] if len(word) >= 5 else word[:].join(reverse(word)) for word in words]
    return " ".join(spun)