def RLE(n, array):
    temp_array = []
    rle = []

    # "<"か">"の配列に変換
    for i in range(1, n):
        if (array[i - 1] < array[i]):
            temp_array.append("<")
        if (array[i - 1] > array[i]):
            temp_array.append(">")

    # ランレングス圧縮
    i = 0
    while (i < len(temp_array)):
        j = 1
        count = 1

        if (temp_array[i] == "<"):
            while ((i + j < len(temp_array)) and (temp_array[i + j] == "<")):
                count += 1
                j += 1
            rle.append(("<", count))
            i += j
            continue

        if (temp_array[i] == ">"):
            while ((i + j < len(temp_array)) and temp_array[i + j] == ">"):
                count += 1
                j += 1
            rle.append((">", count))
            i += j
            continue

    # ランレングス圧縮したものから，チルダ構造の数を計算
    answer = 0
    for i in range(1, len(rle) - 1):
        # ">"の前後の数値の掛け算
        if (rle[i][0] == ">"):
            answer += rle[i - 1][1] * rle[i + 1][1]

    return answer
        



def main():
    N = int(input())
    P = list(map(int, input().split()))

    if(N != len(P) or N < 4):
        print("input error!")
        return

    number_of_tilde = RLE(N, P)
    print(number_of_tilde)


if __name__ == "__main__":
    main()
