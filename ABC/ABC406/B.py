def calc (k, numbers):
    answer = 1
    
    for number in numbers:
        answer *= number
        if (answer >= 10 ** k):
            answer = 1

    return answer


def main():
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    if (n != len(a)):
        print("input error!")
        return

    answer = calc(k, a)
    print(answer)



if __name__ == "__main__":
    main()