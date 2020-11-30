class Solution:
    def toGoatLatin(self, S: str) -> str:
        newList= S.split()
        ans=[]
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        for i, word in enumerate(newList):
            if word[0] in vowels:
                word = word + 'ma'
            else:
                word = word[1:] + word[0] + 'ma'
            for j in range(i+1):
                word +='a'
            ans.append(word)
        newString = ' '.join(ans)
        return newString
