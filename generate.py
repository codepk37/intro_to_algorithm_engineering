import random

def generate_matrix(n, m):
    matrix = [[__*m+_ for _ in range(m)] for __ in range(n)]
    return matrix

def write_matrix_to_file(matrix, filename):
    with open(filename, 'w') as file:
        for row in matrix:
            file.write(' '.join(map(str, row)) + '\n')

def main():
    n = int(input("Enter the number of rows: "))
    m = int(input("Enter the number of columns: "))

    matrix = generate_matrix(n, m)
    write_matrix_to_file(matrix, "in.txt")

    print(f"Matrix of size {n}x{m} generated and stored in 'in.txt'.")

if __name__ == "__main__":
    main()
