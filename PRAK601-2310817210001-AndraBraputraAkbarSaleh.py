a, b = map(int, input().split())

matrix = []

elements = list(map(int, input().split()))

for i in range(a):
    row = elements[i * b: (i + 1) * b]
    matrix.append(row)

for i in range(a):
    for j in range(b):
        print(matrix[i][j], end=" ")
    print()
