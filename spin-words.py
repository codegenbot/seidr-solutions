def spin_words(input_string):
    words = input_string.split()
    for i in range(len(words)):
        if len(words[i]) >= 5:
            if words[i][0].lower() in 'aeiou':
                words[i] = words[i][::-1].capitalize()
            else:
                words[i] = words[i][::-1]
    return " ".join(words)