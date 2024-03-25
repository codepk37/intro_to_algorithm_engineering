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




/////////////////////////////////////
python3 generate.py 
Enter the number of rows: 10
Enter the number of columns: 10
Matrix of size 10x10 generated and stored in 'in.txt'.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
Time taken: 1.892e-06 seconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
Time taken: 0.00143 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
Time taken: 0.001747 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
calling transpose
Time taken: 4.511e-06 seconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
calling transpose
Time taken: 0.002766 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10  c 10
 Reading above
calling transpose
Time taken: 0.002379 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ 



/////////////////////////////////////////////

100*100

python3 generate.py 
Enter the number of rows: 100
Enter the number of columns: 100
Matrix of size 100x100 generated and stored in 'in.txt'.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 100  c 100
 Reading above
Time taken: 0.146646 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 100  c 100
 Reading above
calling transpose
Time taken: 0.231284 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 100  c 100
 Reading above
calling transpose
Time taken: 0.225452 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ 


/////////////////////////

1000*1000

python3 generate.py 
Enter the number of rows: 1000
Enter the number of columns: 1000
Matrix of size 1000x1000 generated and stored in 'in.txt'.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 1000  c 1000
 Reading above
Time taken: 7.13149 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 1000  c 1000
 Reading above
calling transpose
Time taken: 6.4956 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 1000  c 1000
 Reading above
calling transpose
Time taken: 5.71426 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ 



|||||||||||||||||||||||||||
python3 generate.py 
Enter the number of rows: 10000
Enter the number of columns: 100
Matrix of size 10000x100 generated and stored in 'in.txt'.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 100
 Reading above
Time taken: 4.83733 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 100
 Reading above
calling transpose
Time taken: 6.52632 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 100
 Reading above
calling transpose
Time taken: 5.97959 miliseconds
Matrix has been stored in the file: out.tx



///////////////////////////////////////

python3 generate.py 
Enter the number of rows: 10000   
Enter the number of columns: 10000
Matrix of size 10000x10000 generated and stored in 'in.txt'.


popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 10000
 Reading above
Time taken: 1448.44 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 10000
 Reading above
calling transpose
Time taken: 614.309 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 10000
 Reading above
calling transpose
Time taken: 558.327 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ 


////////////////////////////////////////

popos@pop-os-pk:~/Desktop/Transpose$ python3 generate.py 
Enter the number of rows: 10000
Enter the number of columns: 30000
Matrix of size 10000x30000 generated and stored in 'in.txt'.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   a.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 30000
 Reading above
Time taken: 4691.25 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   b.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 30000
 Reading above
calling transpose
Time taken: 1887.04 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ python3 check.py 
Transpose is correct.
popos@pop-os-pk:~/Desktop/Transpose$ g++ -fopenmp   c.cpp  -lstdc++
popos@pop-os-pk:~/Desktop/Transpose$ ./a.out
r 10000  c 30000
 Reading above
calling transpose
Time taken: 1816.78 miliseconds
Matrix has been stored in the file: out.txt
popos@pop-os-pk:~/Desktop/Transpose$ 


