import re
def middle_character(s):
    s = re.sub(r'\W+', '', s).upper()  
    length = len(s)
    mid = length // 2
    
    if length % 2 == 0:
        return s[mid-1:mid+1] 
    else:
        return s[mid]