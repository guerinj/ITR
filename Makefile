CXX=arm-xilinx-linux-gnueabi-g++

all: test

clean:
	rm test	-f

test:
	$(CXX) -lpthread test.cpp -o test
