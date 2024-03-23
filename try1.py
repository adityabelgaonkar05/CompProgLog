from os import *
from sys import *
from collections import *
from math import *

def longestPalinSubstring(str):
    pal = ""
    tocheck = ""

    for i in range(len(str)):
        for j in range(i,len(str)):
            tocheck = str[i:j]
            if tocheck == tocheck[::-1]:
                if len(pal) < len(tocheck):
                    pal = tocheck


    return pal

print(longestPalinSubstring("bbabcbcab"))