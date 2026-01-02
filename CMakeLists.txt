cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(MeuProjeto C)

# Define onde o executável final será colocado (equivalente ao seu TARGET)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

# Lista de arquivos fonte
set(SOURCES 
    src/main.c 
    src/calculator.c
)

# Cria o executável
add_executable(main ${SOURCES})

# Define o nome de saída para coincidir com o seu (build/main)
set_target_properties(main PROPERTIES OUTPUT_NAME "main")