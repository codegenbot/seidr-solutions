```Python
import re


def spin_words(sentence):
    words = sentence.split()
    spun = [" ".join(re.sub(r'[^a-zA-Z]', '', word)[::-1]) if len(re.sub(r'[^a-zA-Z]', '', word)) >= 5 else word for word in words]
    return " ".join(spun)