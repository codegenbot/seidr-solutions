def spin_words(sentence):
    words = sentence.split()
    return " ".join(reversed([word[::-1] for word in words if len(word) >= 5])) + " ".join(words)