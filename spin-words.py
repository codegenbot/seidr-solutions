def spin_words(input_str):
    words = input_str.split()
    result = []
    for word in words:
        if len(word) < 5:
            result.append(word)
        else:
            result.append(word[::-1])
    return " ".join(result)