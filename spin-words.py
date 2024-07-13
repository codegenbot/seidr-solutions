def spin_words(input_string):
    words = input_string.split()
    for word in words:
        if len(word) >= 5:
            words[words.index(word)] = word[::-1]
    return " ".join(words)