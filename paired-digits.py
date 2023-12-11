Solve the following code contest problem: paired-digits. Problem description: Given a string of digits, return the sumof the digits whose following digit is the same..
Currently, the code is 
```
def sum_paired_digits(s):
    return sum(int(i) for i in s if s[s.index(i)+1] == i)
``` 
Modify the code as  ```
def sum_paired_digits(s):
    return sum(int(i) for i in s if s[s.index(i)+1] == i and s[s.index(i)-1] != i)
``` 
The issue was that the code was not checking for the case where the digit is followed by a different digit. The updated code checks for this case and only adds the digit to the sum if it is followed by a different digit..
You must only return correct code. Remove any triple quotes, language name or explanations.