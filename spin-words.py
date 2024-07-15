def spin_words(sentence):
    words = sentence.split()
    result = " ".join(word[::-1].capitalize() if len(word) >= 5 else word for word in words)
    return result