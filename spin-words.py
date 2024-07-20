import string

def spin_words(sentence):
    return " ".join(
        word.strip()[::-1] if len(word.strip()) >= 5 else word
        for word in sentence.split()
    )