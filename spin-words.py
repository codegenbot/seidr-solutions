def spin_words(sentence):
    words = sentence.split()
    new_sentence = " ".join(word[::-1] if len(word) >= 5 else word for word in words)
    return new_sentence