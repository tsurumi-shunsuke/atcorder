from itertools import product

def generate_parentheses_1(n):

    def backtrack(s, left, right):
        if len(s) == n:
            print(s)
            return
        
        if left < (n // 2):
            backtrack(s + "(", left + 1, right)
        
        if right < left:
            backtrack(s + ")", left, right + 1)
    
    if not (1 <= n <= 20):
        print("Invalid input!")
        return
    elif n % 2 == 0:
        backtrack("", 0, 0)


def isvalid(s):
    score = 0
    for c in s:
        if (c == "("):
            score += 1
        else:
            score -= 1
        
        if score < 0:
            return False
    
    return (score == 0)
    
n = int(input())
# generate_parentheses_1(n)

for s in product(["(", ")"], repeat=n):
    if (isvalid(s)):
        print(*s, sep="")