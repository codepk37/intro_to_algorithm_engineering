
pyth:
	python3 generate.py	10	100

run2:
	python3 generate.py	1000	100000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

run1:
	python3 generate.py	10	10
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline
	

	python3 generate.py	100	100
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	1000	10
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	10	1000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	1000	100
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	100	1000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	1000	1000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	10000	100
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	100	10000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	10000	1000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	1000	10000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	100000	100
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	100	100000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	10000	10000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	100000	1000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	1000	10000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	10000	30000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline

	python3 generate.py	30000	10000
	g++ -fopenmp   a.cpp  -lstdc++  -o a
	./a >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b1.cpp  -lstdc++  -o b1
	./b1 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   b2.cpp  -lstdc++  -o b2
	./b2 >> result.txt
	echo "" >> result.txt  # Add a newline
	g++ -fopenmp   c.cpp  -lstdc++  -o c
	./c >> result.txt
	echo "" >> result.txt  # Add a newline
	echo "" >> result.txt  # Add a newline