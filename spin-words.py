from re import reversed

def spin_words(sentence):
    words = sentence.split()
    spun = [" ".join(reversed(word.split())) if len(word) >= 5 else word for word in words]
    return " ".join(spun)