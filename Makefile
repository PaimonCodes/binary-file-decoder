decode: main.cxx
	g++ -std=c++14 main.cxx -o decode.exe

.PHONY: clean
clean:
	rm -f *.exe