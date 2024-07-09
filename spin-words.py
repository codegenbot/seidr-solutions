def spin_words(sentence):
    words = sentence.split()
    result = []

    for word in words:
        if len(word) >= 5:
            result.append(word.strip()[::-1] + (" " if len(result) > 0 else ""))
        else:
            result.append(word)

    return "".join(result)