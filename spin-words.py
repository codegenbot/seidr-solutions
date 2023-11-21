def spin_words(string):
    words = string.split(' ')
    updated_words = []
    for word in words:
        if len(word) >= 5:
            updated_words.append(word[::-1])
        else:
            updated_words.append(word)

    return ' '.join(updated_words)