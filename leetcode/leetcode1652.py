class Solution(object):
    def decrypt(self, code, k):
        n = len(code)
        circular_code = code * 2
        decrypted_code = []

        for i in range(n):
            if k > 0:
                sum_elements = sum(circular_code[i + 1 : i + 1 + k])
                decrypted_code.append(sum_elements)
            elif k < 0:
                sum_elements = sum(circular_code[i + n + k : i + n])
                decrypted_code.append(sum_elements)
            elif k == 0:
                decrypted_code.append(0)
        return decrypted_code


        