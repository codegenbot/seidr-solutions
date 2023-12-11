import re

def spin_words(sentence):
    words = sentence.split()
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = re.sub(r"([a-zA-Z]+)([.,!?]*)$", r"\1"[::-1] + r"\2", words[i])
    return ' '.join(words)