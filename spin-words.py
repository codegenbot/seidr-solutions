```
def spin_words(sentence):
    return " ".join("".join(reversed(word)) if len(word.strip()) >= 5 else word for word in sentence.split())