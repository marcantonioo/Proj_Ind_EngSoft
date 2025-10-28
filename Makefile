CXX = g++
LCLTST = ./test/main.cpp
all: app
app: ./src/main.cpp ./bin/libbib.so
	$(CXX) ./src/main.cpp -L./bin -lbib -o ./bin/app

./bin/libbib.so: ./src/bib.cpp
	mkdir -p ./bin
	$(CXX) -shared -o ./bin/libbib.so -fPIC ./src/bib.cpp

test: $(LCLTST)
	g++ $(LCLTST) -o ./bin/test -Wextra
	./bin/test
clean:
	rm -f app ./bin/*
