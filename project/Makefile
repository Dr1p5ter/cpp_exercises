CC=g++
STD=-std=c++17
FIN="Complete..."

comp: main.cpp
	@echo "Compiling main.cpp to main..."
	$(CC) main.cpp -Werror -Wall $(STD) -o main
	./main
	make clean

clean: main
	@echo "Removing main from directory..."
	rm main
	@echo $(FIN)

edit-help:
	@echo "Use ctr + v && ctr + i to get indents"
