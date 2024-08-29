def spin_words(sentence):
    words = sentence.split()
    reversed_words = [
        "".join(reversed(word)) if len(word) >= 5 else word for word in words
    ]
    return " ".join(reversed_words)