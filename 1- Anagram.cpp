#include<iostream>
using namespace std;

//CONSTRAINT
//the constraint is that there will be lowercase 
//characters only in the input strings, so we are 
//going to deal with (97-122) ASCII chars only

//SOLUTION
//An anagram of a word is basically another word
//that uses the same letters with the same frequency, 
//just in a different order.Here, our concern is just the
//letters and their frequency, so the easy choice is to use 
//a frequency map. We will make a freq map (array) having 
//indexes ranging from (0-122) so that it can store the 
//freq of (a-z) in its indices (97-122)

//We will convert the letters to their unicode number (97 - 122) 
//and this unicode will be the index of freq map on which we 
//are going to store the freq of this char. int(S[i]) is the unicode of 
//ith char of S so we use it as index of fMap.

//PROCEDURE
//First, we iterate through the first string S and increment 
//each character code position in our frequency map(fmap).
// (FOR EXAMPLE, for a in "anagram" we will increment 0 to 1 
// on the 97th index of fmap.)
//Then we run through the second string T and decrement 
//the character code positions in fmap.If we ever go below 
//0 then we know we've got a character frequency in T that 
//isn't the same as S, so we should return false. If we get to 
//the end with no problem, we should return true.

bool isAnagram(string S, string T)
{
    int len = S.length();

    //if size of S and T is not equal
    if (T.length() != len)
        return false;

    //we have created a freq map of size 
    //123 to record the freq of each character 
    //of the input string S
    int fMap[123] = { 0 };

    //iterating S and recording the frequency of 
    //each character in the freq map
    for (int i = 0; i < len; i++)
        fMap[int(S[i])]++;

    //iterating T, decrementing the frequencies 
    //and checking if anyone goes below 0 or not
    for (int i = 0; i < len; i++)
        if (fMap[int(T[i])]-- == 0)
            return false;

    return true;
}