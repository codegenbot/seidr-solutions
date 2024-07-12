def spin_words(s):
    words = s.split()
    result = [' '.join([word for word in words if len(word) < 5])] + ' '
    for word in words:
        if len(word) >= 5:
            result.append(word[::-1])
        else:
            result.append(word)
    return ''.join(result)