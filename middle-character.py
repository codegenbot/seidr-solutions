Here is the Python solution for the problem:

```
def middle_character(s):
    s_len = len(s)
    if s_len % 2 == 0:
        return s[slen//2-1:slen//2+1]
    else:
        return s[len(s)//2]