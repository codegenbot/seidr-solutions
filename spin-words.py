def spin_words(sentence):
    words = sentence.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5:
            result.append(" " if i > 0 else "") + word[::-1]
        else:
            result.append(" " if i > 0 else "") + word
    return "".join(result).strip()