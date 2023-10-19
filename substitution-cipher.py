import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:



output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
def Transpose_cipher(cipher,key1,key2):
    # ---characternum
    def character_toneumber():

        sum = 0
        for k in sorted(list(set(cipher))):
            ind = list(set(cipher)).index(k)
            trans_dict.update({k: ind})
        #print(trans_dict)
        cipherarray = np.array(list(cipher),dtype=int)
        keyarray1 = np.array(list(key1),dtype=int)
        keyarray2 = np.array(list(key2),dtype=int)
        keyarray1 = np.stack((keyarray1,)*len(cipher))
        keyarray2 = np.stack((keyarray2,)*len(cipher))
        cipherarray = np.stack((cipherarray.T,)*len(cipher)).T + keyarray1 +\
                      np.stack((keyarray2.T,)*len(cipher)).T
        #print(cipherarray)
        cipherlist = list(cipherarray.T.reshape((1,-1)))
        #print(cipherlist)
        encryptlist = [ ((trans_dict[num[0]]+ trans_dict[num[1]])%((len(cipher)-1)))for num in\
                        [num for num in cipherlist ]]
        return(encryptlist)
    ciphernumber = character_toneumber()
    for i in list(set(cipher[2:])):
        decipher += i[0]*ciphernumber[trans_dict[i]]
    return(decipher)

"""

def Decryption(encrypt_value,key1,key2,key3,llist,reverse_trans_dict,Sigma):
    return Trinity_cipher( ''.join(list(np.core.defchararray.add( np.core.defchararray.add(list(key1), encrypt_value.T[1]).astype(str), encrypt_value.T[0]).astype(str))  ), \
                           key2, key3,llist,reverse_trans_dict,Sigma)

"""
if __name__ == '__main__':
    cipher = "abcd"
    key1 = "0214"
    key2 = "0214"
    print(Transposition_cipher(cipher, key1, key2))
