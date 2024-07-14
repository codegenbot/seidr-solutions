def spin_words(sentence):
    words = sentence.split()
    spun = [(' '.join(word[::-1].split())) if len(word) >= 5 else word for word in words]
    return ' '.join(spun)