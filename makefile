TARGET = build/main
SRC = src/main.c src/calculator.c


main: src/main.c 
	
	@echo "Creating the builded binary folder"
	mkdir -p "build/"
	@echo "compiling the program"
	@sleep 1

	cc ${SRC} -o ${TARGET}
	@echo "Compilation Successful!"
	@./${TARGET}

clean: 
	rm -rf build/