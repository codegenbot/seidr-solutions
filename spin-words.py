def spin_words(text):
    words = text.split()
    result = []
    for word in words:
        if len(word) >= 5:
            rev_word = word[::-1]
            if ' ' in rev_word:  
                result.append(rev_word.replace(' ', '', 1)) 
            else:
                result.append(rev_word)
        else:
            result.append(word)
    return ' '.join(result)