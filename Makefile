CXX = g++
LCLTST = ./test/main.cpp
APP = ./bin/app
LIB = ./bin/libbib.so
TEST = ./bin/test

# Alvo padrão
all: $(APP)

# Compila o app principal
$(APP): ./src/main.cpp $(LIB)
	mkdir -p ./bin
	$(CXX) ./src/main.cpp -L./bin -lbib -Wl,-rpath=$(PWD)/bin -o $(APP)

# Compila a biblioteca compartilhada
$(LIB): ./src/bib.cpp
	mkdir -p ./bin
	$(CXX) -shared -fPIC -o $(LIB) ./src/bib.cpp

# Compila e executa os testes
test: $(LCLTST) $(LIB)
	mkdir -p ./bin
	$(CXX) $(LCLTST) -L./bin -lbib -Wl,-rpath=$(PWD)/bin -o $(TEST) -Wextra
	LD_LIBRARY_PATH=$(PWD)/bin $(TEST)

# Limpeza
clean:
	rm -rf ./bin
