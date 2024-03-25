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


#include <vector>

// Function to transpose a submatrix
void transpose_submatrix(std::vector<std::vector<int>>& matrix, std::vector<std::vector<int>>& dest, int start_row, int start_col, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            dest[start_col + j][start_row + i] = matrix[start_row + i][start_col + j];
        }
    }
}

// Function to transpose a matrix by iterating through blocks
void transpose_by_blocks(std::vector<std::vector<int>>& src, std::vector<std::vector<int>>& dest, int block_size) {
    int rows = src.size();
    int cols = src[0].size();

    for (int i = 0; i < rows; i += block_size) {
        for (int j = 0; j < cols; j += block_size) {
            int block_rows = std::min(block_size, rows - i);
            int block_cols = std::min(block_size, cols - j);
            transpose_submatrix(src, dest, i, j, block_rows, block_cols);
        }
    }
}


int main(){
    

     std::string filenam = "in.txt";
    
    /////////////////
    vector<vector<int>> src=readMatrixFromFile(filenam);
    ll r=src.size(),c=src[0].size();
    cout<<"r "<<r<<"  c "<<c<<endl;
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
    
    transpose_by_blocks(src,dest,32); 
    




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