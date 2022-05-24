CC=g++
STD=-std=c++17
FIN="Complete..."
PROJDIR=project

comp: $(PROJDIR)/main.cpp 
	@echo "Compiling main.cpp to main..."
	$(CC) $(PROJDIR)/main.cpp -Werror -Wall $(STD) -o main
	./main
	rm main -i -v
	@echo $(FIN)

edit-help:
	@echo "Use ctr + v && ctr + i to get indents"
