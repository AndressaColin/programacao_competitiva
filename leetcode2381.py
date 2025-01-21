class Solution(object):
    def shiftingLetters(self, s, shifts):
        n = len(s)
        diffarray = [0]*n
        for shift in shifts:
            if shift[2] == 1:
                diffarray[shift[0]] += 1
                if shift[1] + 1 < n:
                    
