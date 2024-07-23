```
def spin_words(sentence):
    punctuation = str.maketrans("", "", ",.!?\"\'")
    return ' '.join((word.strip().lower()[::-1] if len(word.strip()) >= 5 else word.translate(punctuation)) for word in sentence.split())