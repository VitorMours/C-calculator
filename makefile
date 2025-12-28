main: 
	
	@echo "Creating the builded binary folder"
	mkdir -p "build/"
	@echo "compiling the program"
	@sleep 1

	cc src/main.c -o build/main
	@./build/main
