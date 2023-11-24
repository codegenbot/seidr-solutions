def spin_words(sentence):
    if len(sentence) >= 5:
        return sentence[::-1]
    else:
        return sentence