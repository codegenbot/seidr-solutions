```
def spin_words(sentence):
    words = sentence.split()
    result = ''

    for word in words:
        if len(word) >= 5:
            result += word[::-1] + ' '
        else:
            result += word + ' '

    return result.strip()