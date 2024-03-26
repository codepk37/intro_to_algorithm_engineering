import numpy as np

def read_matrix_from_file(filename):
    matrix = []
    with open(filename, 'r') as file:
        for line in file:
            row = list(map(int, line.strip().split()))
            matrix.append(row)
    return np.array(matrix)  # Convert to NumPy array

def check_transpose(input_matrix, output_matrix):
    transpose = np.transpose(input_matrix)
    return np.array_equal(transpose, output_matrix)  # Use np.array_equal to compare arrays

def main():
    # Read matrices from files
    input_matrix = read_matrix_from_file("in.txt")
    # print("Input Matrix:")
    # print(input_matrix)

    output_matrix = read_matrix_from_file("out.txt")
    # print("Output Matrix:")
    # print(output_matrix)

    # Check if transpose is correct
    if check_transpose(input_matrix, output_matrix):
        print("Transpose is correct.")
    else:
        print("Transpose is incorrect.")

if __name__ == "__main__":
    main()
