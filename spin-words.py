def spin_words(input_str):
    words = input_str.split()
    result = []
    for i, word in enumerate(words):
        if len(word) >= 5:
            result[i] = word[::-1]
        else:
            result.append(word)
    return " ".join(result)