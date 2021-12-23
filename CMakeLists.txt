cmake_minimum_required(VERSION 3.20)
project(lab3)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab3 main.cpp WorkflowExecutor.cpp WorkflowExecutor.h WorkflowParser.cpp WorkflowParser.h Block.h ReadFile.cpp ReadFile.h BlockFactory.cpp BlockFactory.h Sort.cpp Sort.h WriteFile.cpp WriteFile.h Grep.cpp Grep.h Replace.cpp Replace.h Dump.cpp Dump.h IBlockMaker.h BlockMaker.h NumOfArgs.h OpenFile.h TooManyMakers.h UnrecognizedKey.h WorkflowException.h BlockDescErr.h)
