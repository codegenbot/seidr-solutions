```
def spin_words(sentence):
    words = sentence.split()
    has_long_word = False
    for i in range(len(words)):
        if len(words[i]) >= 5:
            has_long_word = True
            break
    return " ".join(word[::-1] if has_long_word else word for word in words)