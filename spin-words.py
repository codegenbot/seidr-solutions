import re
def spin_words(sentence):
    words = re.split('(\W)', sentence)
    spun = [''.join(word[::-1]) if len(word) >= 5 else word for word, in zip(words[::2], words[1::2])]
    return ''.join(spun)