def bfs(start, graph):
    N = len(graph)
    dist = [-1] * N
    dist[start] = 0
    list = []
    list.append(start)

    while list:
        v = list.pop(0)
        for nv in graph[v]:
            if dist[nv] == -1:
                dist[nv] = dist[v] + 1
                list.append(nv)
    
    max_dist = max(dist)
    farthest_node = dist.index(max_dist)
    

    return farthest_node, max_dist



def main():
    N = int(input())
    graph = [[] for _ in range(N)]
    for _ in range(N-1):
        a, b = map(int, input().split())
        graph[a - 1].append(b - 1)
        graph[b - 1].append(a - 1)

    s, _ = bfs(0, graph)
    t, diameter = bfs(s, graph)
    score = diameter + 1
    print(score)


main()

