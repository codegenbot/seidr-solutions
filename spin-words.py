def spin_words(sentence):
    words = sentence.split()
    result = " ".join(word[::-1] if len(word) >= 5 else word for word in words)
    return " ".join([result.split()[0].capitalize()] + result.split()[1:])