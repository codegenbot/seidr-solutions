def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            if len(word) > len(word[::-1]):
                result.append(word[::-1] + " ")
            else:
                result.append(word[::-1])
        else:
            result.append(word)
    return " ".join(result).strip()