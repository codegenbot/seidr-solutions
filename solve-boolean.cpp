```c++
case '|': 
    while (i < s.size()) { 
        switch (s[i]) { 
            case 'T':
                result = true;
                break;
            case 'F':
                i++;  
                result = false;
                return result; 
        }
        i++;
    } 
    return result;