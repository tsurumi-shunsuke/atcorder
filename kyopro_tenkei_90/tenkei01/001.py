import time

# 初期化
n_l = input().split()
k = input()
a = input().split()

start = time.perf_counter()

n_l = [int(num) for num in n_l]
k = int(k)
a = [int(num) for num in a]

n = n_l[0]
l = n_l[1]

if(not (1 <= k <= n <= 100000)):
    print("invalid input: 1 <= K <= N <= 100000")

if(n != len(a)):
    print("invalid input: N = len(An)")

for i in range(len(a)):
    if(i+1 < len(a)):
        if(a[i] > a[i+1]):
            print("invalid input: A1 < A2 < ... < An")

if((0 >= a[0]) or (a[len(a)-1]  >= l) or (l > 10**9)):
    print("invalid input: 0 < A1, An < L < = 10^9")


# コンビネーションの列挙
def comb(arr, k, index = 0, current = [], result = []):
    if len(current) == k:
        result.append(current)
        return
    if index >= len(arr):
        return
    
    comb(arr, k, index + 1, current + [arr[index]], result)
    comb(arr, k, index + 1, current, result)

    return result


combs = comb(a, k)

score = 0
for com in combs:
    score_temp = com[0]
    for i in range(0, k):
        if i < k-1:
            if (com[i+1] - com[i] < score_temp):
                score_temp = com[i+1] - com[i]
        else:
            if (l - com[i] < score_temp):
                score_temp = l - com[i]

    if score < score_temp:
        score = score_temp

print(score)



# 計算時間出力
end = time.perf_counter()
print("------------time-------------")
print(end - start)