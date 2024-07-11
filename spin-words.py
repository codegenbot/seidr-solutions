def spin_words(sentence):
    words = sentence.split()
    return " ".join(word if len(word) < 5 else word[::-1] for word in words)