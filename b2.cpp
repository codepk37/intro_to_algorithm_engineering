#include<bits/stdc++.h>
#include<omp.h>
using namespace std;
#define ll long long 

void disp(vector<vector<int>> m){
    for(auto it: m){
        for(auto i : it){
            cout<<i<<" ";
        }cout<<endl;
    }
}
void storeMatrixToFile(const std::vector<std::vector<int>>& matrix, const std::string& filename) {
    std::ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return;
    }

    for (const auto& row : matrix) {
        for (int element : row) {
            outputFile << element << " ";
        }
        outputFile << std::endl;
    }

    outputFile.close();
}

std::vector<std::vector<int>> readMatrixFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        return {};
    }

    std::vector<std::vector<int>> matrix;
    int num;
    while (inputFile >> num) {
        matrix.push_back({num});
        while (inputFile.peek() == ' ') {
            inputFile.get();
            inputFile >> num;
            matrix.back().push_back(num);
        }
    }

    inputFile.close();
    return matrix;
}
///  ////////////////////////////////////
///  //////////////////////////////



// Function to transpose a square matrix recursively
void recursive_transpose(std::vector<std::vector<int>>& matrix,std::vector<std::vector<int>>& dest, int start_row, int start_col, int rows ,int cols) {
    // Base case: If the submatrix is small enough, directly transpose it
    
     

     if(cols*rows==0){return;}
     
    // printf("start_row %d   start_col %d    rows %d    cols %d",start_row,start_col,rows,cols); helped for_ above condition
    if (rows * cols <= 81920) { //L1 cache size
        
        for (int i = 0; i < rows; i++) {//rows,cols is its region
            for (int j = 0; j < cols; j++) {
                dest[start_col + j][start_row + i]  =matrix[start_row + i][start_col + j];
            }
        }

        
    } else {
        // Recursive case: Divide the matrix into nine parts and transpose each recursively
        int third_size_rows = rows / 3;
        int third_size_cols = cols / 3;

   
        // recursive_transpose(matrix,dest, start_row, start_col, half_size_rows,half_size_cols);
        // recursive_transpose(matrix,dest, start_row, start_col + half_size_cols,  half_size_rows,cols- half_size_cols);    
        // recursive_transpose(matrix,dest, start_row + half_size_rows, start_col, rows- half_size_rows,half_size_cols);     
        // recursive_transpose(matrix, dest,start_row + half_size_rows, start_col + half_size_cols, rows- half_size_rows,cols- half_size_cols);

         // Top section
        recursive_transpose(matrix, dest, start_row, start_col,                      third_size_rows , third_size_cols);
        // Middle section
        recursive_transpose(matrix, dest, start_row, start_col + third_size_cols,     third_size_rows, third_size_cols );        
        // Bottom section
        recursive_transpose(matrix, dest, start_row, start_col + 2 * third_size_cols, third_size_rows, cols - 2 * third_size_cols);
        // Left section
        recursive_transpose(matrix, dest, start_row + third_size_rows, start_col,       third_size_rows   , third_size_cols);
        // Middle section (center)
        recursive_transpose(matrix, dest, start_row + third_size_rows, start_col + third_size_cols,     third_size_rows      , third_size_cols);
        // Right section
        recursive_transpose(matrix, dest, start_row + third_size_rows, start_col + 2 * third_size_cols,     third_size_rows      , cols - 2 * third_size_cols);
        // Top section
        recursive_transpose(matrix, dest, start_row + 2 * third_size_rows, start_col, rows - 2 * third_size_rows, third_size_cols);
        // Middle section
        recursive_transpose(matrix, dest, start_row + 2 * third_size_rows, start_col + third_size_cols, rows - 2 * third_size_rows, third_size_cols);
        // Bottom section
        recursive_transpose(matrix, dest, start_row + 2 * third_size_rows, start_col + 2 * third_size_cols, rows - 2 * third_size_rows,  cols - 2 * third_size_cols);
    }
}


// Function to transpose a matrix recursively
void transpose(std::vector<std::vector<int>>& src,std::vector<std::vector<int>>& dest) {
    int row = src.size(); // Size of the matrix
    int col  = src[0].size();
   
    recursive_transpose(src,dest, 0, 0, row,col); // Start recursive transpose from the top-left corner of the matrix
}

int main(){
    

     std::string filenam = "in.txt";
    
    /////////////////
    vector<vector<int>> src=readMatrixFromFile(filenam);
    ll r=src.size(),c=src[0].size();
    cout<<"b2.cpp "<<"r "<<r<<"  c "<<c<<endl;
    // disp(src);
    cout<<" Reading above\n";
    ll r_t=c,c_t=r;
    vector<vector<int>> dest(r_t,vector<int>(c_t)); //transpose(src);

    
    // Get the current time point
    cout<<"calling transpose\n";
    auto start = std::chrono::high_resolution_clock::now();
/////////////////////////////////////////////////
    
    // src r,c ; dest r_t,c_t
    
    // dest=transpose()
    
    transpose(src,dest); 
    




/////////////////////
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    // Convert the duration to milliseconds and output
    std::cout << "Time taken: " << duration.count()*1000 << " miliseconds" << std::endl;


    // disp(dest);

    std::string filename = "out.txt";
    storeMatrixToFile(dest, filename);
    std::cout << "Matrix has been stored in the file: " << filename << std::endl;


}