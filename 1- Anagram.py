#18/01/2023
#242. Valid Anagram
#(explained thoroughly in cpp solution)
class Solution(object):
    def isAnagram(self, s, t):
        #Count() is a Python built-in function 
        #that returns the number of times an 
        #object appears in a list. It returns the 
        #number of times a given value occurs 
        #in a string or a list, as the name implies.
        sMap= {
                c:s.count(c) for c in set(s)#stores the frequency of all characters in s
              }
        tMap={
                c:t.count(c) for c in set(t)#stores the frequency of all characters in t
            }
        
        return sMap==tMap
    


temp=Solution()
b=temp.isAnagram("rat", "car")
print(b)