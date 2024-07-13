def spin_words(input_string):
    words = input_string.split()
    for i,word in enumerate(words):
        if len(word) >= 5:
            words[i] = word[::-1]
    return " ".join(words)