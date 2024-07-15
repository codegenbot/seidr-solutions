```
def spin_words(sentence):
    return " ".join(
        word[::-1] if len(word) >= 5 and (i > 0 or s != " ") else word
        for i, (word, s) in enumerate(sentence.split(), start=1)
    )