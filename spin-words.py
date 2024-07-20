```
def spin_words(sentence):
    return " ".join(
        "" if len(word.strip()) < 5 or word == word.strip() else word.strip()[::-1]
        for word in sentence.split()
    )