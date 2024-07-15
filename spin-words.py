def spin_words(sentence):
    words = sentence.split()
    result = []
    for word in words:
        if len(word) >= 5:
            middle_index = (len(str(word)) // 2)
            result.append(' '.join([word[:middle_index]] + [word[middle_index:][::-1]] + [word[middle_index:]]))
        else:
            result.append(word)
    return ' '.join(result)