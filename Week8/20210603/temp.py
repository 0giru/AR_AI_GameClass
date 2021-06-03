# relation_test = [[1, 2], [1, 3], [2, 1], [2, 4], [3, 1], [4, 2], [4, 5], [5, 4]]
relation_test = [[1, 2], [2, 1], [2, 3], [3, 2], [3, 4], [4, 3], [4, 5], [5, 4]]

def solution(N, relation : list):
    result = [0 for _ in range(N + 1)]
    friend = [[] for _ in range(N + 1)]

    for relations in relation:
        friend[relations[0]].append(relations[1])

    for i in range(1, N + 1):
        result[i] += len(friend[i])
        for j in friend[i]:
            for k in friend[j]:
                if k == i:
                    continue
                else:
                    result[i] += 1

    print(result[1:])

solution(5, relation_test)

# result
# {3, 4, 2, 3, 2}

# input
#  {1, 2}
#  {1, 3}
#  {2, 1}
#  {2, 4}
#  {3, 1}
#  {4, 2}
#  {4, 5}
#  {5, 4}

# temp[temp[i][j]-1][j]