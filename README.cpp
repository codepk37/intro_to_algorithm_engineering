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


Or use Makefile


2>
a. a.cpp
b. b1.cpp b2.cpp
c. c.cpp 

