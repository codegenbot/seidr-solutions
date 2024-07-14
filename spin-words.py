```
def spin_words(sentence):
    words = sentence.split()
    has_long_word = False
    for i in range(len(words)):
        if len(words[i]) >= 5:
            words[i] = words[i][::-1]
            has_long_word = True
    return " ".join(words) if has_long_word else sentence