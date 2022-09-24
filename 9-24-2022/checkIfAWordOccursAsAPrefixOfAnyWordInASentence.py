class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        listWords = sentence.split()
        count = 0
        for w in listWords:
            count += 1
            if listWords[count-1].startswith(searchWord) == True:
                return count
            
        return -1
        
