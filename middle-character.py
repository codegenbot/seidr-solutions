```
def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length//2-1:length//2+1].replace(" ", "").replace(",", "").replace(".", "").replace("(", "").replace(")", "").strip()
    else:
        return ''.join(filter(str.isalpha, s[(length-1)//2:(length+1)//2])).strip()