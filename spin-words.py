```
def spin_words(sentence):
    return ' '.join(word[::-1] if word[::-1].count(' ') < len(word) else word for word in sentence.split())