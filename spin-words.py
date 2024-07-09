```
def spin_words(sentence):
    words = sentence.split()
    result = []

    for word in words:
        if len(word) >= 5:
            reversed_word = word[::-1]
            while len(reversed_word) > len(word):
                reversed_word = reversed_word[:-1]
            result.append(reversed_word + " ")
        else:
            result.append(word + " ")

    return " ".join(result).strip()