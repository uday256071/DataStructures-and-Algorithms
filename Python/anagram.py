
""" An anagram is a word or phrase formed by rearranging the letters
 of a different word or phrase, typically using all the original letters exactly once.
 Eg:  God,ogd, o Dg"""

#  method 1:
from collections import Counter

def anagram(str1,str2):
    s1=str1.replace(" ","").lower()
    s2=str2.replace(" ","").lower()
    
    if sorted(s1)==sorted(s2):
        return ("Anagram")
    else:
        return ("Not Anagram")

def anagram1(str1,str2):
    s1=str1.replace(" ","").lower()
    s2=str2.replace(" ","").lower()

    if Counter(s1)==Counter(s2):
        return ("Anagram")
    else:
        return ("Not Anagram")

print(anagram("god","O Dg"))
print(anagram1("god","O Dg"))


