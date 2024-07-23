```
def spin_words(sentence):
    return ' '.join((word[::-1] if len(word) >= 5 else word.capitalize()) for word in sentence.split())