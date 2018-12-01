cmake_minimum_required(VERSION 3.12)
project(MatrizEsparsa)

set(CMAKE_CXX_STANDARD 17)

add_executable(MatrizEsparsa src/main.cpp src/AVLTree.h src/NodeTree.h src/MatrizEsparsa.h src/Linha.h src/WrapperColuna.h)