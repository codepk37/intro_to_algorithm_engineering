opos@pop-os-pk:~$ python3 generate.py 
Enter the number of rows: 1000
Enter the number of columns: 1000
Matrix of size 1000x1000 generated and stored in 'in.txt'.
popos@pop-os-pk:$ g++ -fopenmp a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 1000  c 1000
 Reading above
Time taken: 7216.4 nanoseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/$ python3 check.py 
Transpose is correct.

// Function to transpose a square matrix recursively
void recursive_transpose(std::vector<std::vector<int>>& matrix, int start_row, int start_col, int size) {
    // Base case: If the submatrix is small enough, directly transpose it
    if (size <= 32) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < i; j++) {
                std::swap(matrix[start_row + i][start_col + j], matrix[start_row + j][start_col + i]);
            }
        }
    } else {
        // Recursive case: Divide the matrix into four quadrants and transpose each recursively
        int half_size = size / 2;

        // Transpose top-left quadrant
        recursive_transpose(matrix, start_row, start_col, half_size);
        // Transpose top-right quadrant
        recursive_transpose(matrix, start_row, start_col + half_size, half_size);
        // Transpose bottom-left quadrant
        recursive_transpose(matrix, start_row + half_size, start_col, half_size);
        // Transpose bottom-right quadrant
        recursive_transpose(matrix, start_row + half_size, start_col + half_size, half_size);

        // Combine results by swapping corner result matrices
        for (int i = 0; i < half_size; i++) {
            for (int j = 0; j < half_size; j++) {
                std::swap(matrix[start_row + i][start_col + j + half_size], matrix[start_row + i + half_size][start_col + j]);
            }
        }

        // Handle odd size: swap elements along the diagonal
        if (size % 2 != 0) {
            for (int i = 0; i < half_size; i++) {
                std::swap(matrix[start_row + i][start_col + size - 1], matrix[start_row + size - 1][start_col + i]);
            }
        }
    }
}
