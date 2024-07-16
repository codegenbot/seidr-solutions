def spin_words(input_string):
    words = input_string.split()
    output_words = []

    for word in words:
        if len(word) >= 5:
            output_words.append(word[::-1])
        else:
            output_words.append(word)

    return " ".join(output_words)