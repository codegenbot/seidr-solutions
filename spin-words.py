def spin_words(text):
    words = text.split()
    result = ""

    for word in words:
        if len(word) >= 5:
            result += word[::-1] + " "
        else:
            result += word + " "

    return result.strip()