def spin_words(sentence):
    result = []

    for word in sentence.split():
        if len(word) >= 5:
            result.append(" " + word[::-1] + " ")
        else:
            result.append(" " + word + " ")

    return " ".join(result).strip()