class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = defaultdict(list) # mapping the count of each char
        # we use a deafult dict in order to make sure that if the list of a certain value doesnt exist
        # then it createes a def empty list for it

        for s in strs:
            count = [0]*26

            for c in s:
                count[ord(c) - ord("a")] += 1
            
            result[tuple(count)].append(s) 
            # here we use a tuple because a list in py is mutable and hashable in py, so we gotta make 
            # sure that we convert the list into a value that can be used for keys
            # keys cant be mutable :p
            # so we convert it to a tuple -- since tuple are immutable adn can be hashed or used
            # we can also use  thee str method but it might be slower
        
        return result.values() # O(m*n*26), essentially m*n 
        

class SolutionSecond:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # approahc2 instead of using a count func, we'll just sort every word -- eat becomes aet, then if we meet the word tea-- it becomes aet as well
        """
        strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
        becomes
        {
        "aet": ["eat", "tea", "ate"],
        "ant": ["tan", "nat"],
        "abt": ["bat"]
        }

        result=[["eat", "tea", "ate"], ["tan", "nat"], ["bat"]]

        now since we are sorting so it becomes quite a bit slower -- m*nlogn 
        NOT FASTER

        """
        map = defaultdict(list)

        for s in strs:
            sorted_element = ''.join(sorted(s))
            map[sorted_element].append(s)
        
        return list(map.values())

        # last one shudd have been faster -- leetcode is a lie says i beat less people with this pproach -- HUH!