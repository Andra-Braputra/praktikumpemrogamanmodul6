size = int(input())

matrix = list(map(int, input().split()))

for i in range(size):
    matrix[i] *= int(i + 1)

for element in matrix:
    print(element, end=" ")
print()
