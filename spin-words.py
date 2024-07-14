def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            rev_word = word[::-1]
            if len(rev_word) >= 5:
                result.append(rev_word)
            else:
                result.append(word)
        else:
            result.append(word)
    return " ".join(result)