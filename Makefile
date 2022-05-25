CC=g++
STD=c++17
FIN="Complete..."
PROJDIR=project
DESC=""

comp: $(PROJDIR)/main.cpp 
	@echo "Compiling main.cpp to main..."
	$(CC) $(PROJDIR)/main.cpp -Werror -Wall -std=$(STD) -o main
	./main && rm ./main -v
	@echo $(FIN)

update:
	git add . && git status
	git commit -m $(DESC) && git status

edit-help:
	@echo "Use ctr + v && ctr + i to get indents"
