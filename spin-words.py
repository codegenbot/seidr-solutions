def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            result.append(" ".join(word[i] for i in range(len(word)-1,-1,-1)))
        else:
            result.append(word)
    return " ".join(result[1:])