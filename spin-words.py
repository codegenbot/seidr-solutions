```
def spin_words(sentence):
    words = sentence.split()
    if any(len(word) >= 5 for word in words):
        return " ".join([word[::-1] if len(word) >= 5 else word for word in words])
    return sentence