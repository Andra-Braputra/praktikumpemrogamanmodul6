def multiply(matrix_a, matrix_b):
    result_matrix = []
    
    for i in range(len(matrix_a)):
        row = []
        for j in range(len(matrix_b[0])):
            element = 0
            for k in range(len(matrix_a[0])):
                element += matrix_a[i][k] * matrix_b[k][j]
            row.append(element)
        result_matrix.append(row)
    
    return result_matrix

def main():
    n = int(input())
    print ("Matrix A")
    matrix_a = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix_a.append(row)
    
    print ("Matrix B")
    matrix_b = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix_b.append(row)
    
    result_matrix = multiply(matrix_a, matrix_b)
    
    
    print ("Matrix AXB")
    for row in result_matrix:
        print(' '.join(map(str, row)))

if __name__ == "__main__":
    main()
