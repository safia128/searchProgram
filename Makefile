all: generateMatrix

generateMatrix: generateMatrix.cpp
	mkdir -p bin
	g++ -o bin/generateMatrix generateMatrix.cpp

clean:
	rm -rf bin
