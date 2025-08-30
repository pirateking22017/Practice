from typing import List

class Solution(object):
    anagram_dict = {}

    for word in strs:
        sorted_words = ''.join(sorted(word))
        if sorted_words not in anagram_dict:
            anagram_dict[sorted_words] = []
        anagram_dict[sorted_words].append(word)
    
    return list(anagram_dict.values())
        