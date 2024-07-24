```
def spin_words(sentence):
    words = sentence.split()
    result = []
    prev_word = ""
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1] + " ")
            prev_word = word
        else:
            result.append(prev_word + " " + word)
            prev_word = word
    return "".join(result).strip()