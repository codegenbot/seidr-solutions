```
def spin_words(sentence):
    return " ".join(reversed(word) if len(word) >= 5 else word for word in sentence.split())