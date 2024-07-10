```
def middle_character(s):
    s = s.split()
    result = []
    for word in s:
        length = len(word)
        if length % 2 == 0:
            result.append(word[length//2-1:length//2+1])
        else:
            result.append(word[length//2])
    return ' '.join(result)