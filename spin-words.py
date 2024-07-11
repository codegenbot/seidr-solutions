def spin_words(text):
    words = text.split()
    result = []
    temp_result = ''
    for word in words:
        if len(word) >= 5:
            temp_result += word[::-1] + ' '
        else:
            temp_result += word + ' '
    return temp_result.strip()