cmake_minimum_required(VERSION 3.5.1)
project(Stream_Processor)

set(CMAKE_CXX_STANDARD 14)

SET(CMAKE_CXX_FLAGS -pthread)

add_executable(Stream_Processor main.cpp generated/SiddhiqlBaseListener.cpp generated/SiddhiqlLexer.cpp generated/SiddhiqlListener.cpp
        generated/SiddhiqlParser.cpp src/Translator.cpp generated/SiddhiqlBaseVisitor.cpp generated/SiddhiqlVisitor.cpp src/TranslatorVisitor.cpp src/query/DefinitionStream.cpp src/query/Annotation.cpp src/query/ExecutionElement.cpp src/query/OutputAttribute.cpp src/cpp-file-creation/ClassCreator.cpp src/cpp-file-creation/Include.cpp src/cpp-file-creation/Method.cpp src/cpp-file-creation/PublicMembers.cpp src/cpp-file-creation/Variable.cpp src/cpp-file-creation/FunctionCreation.cpp
        src/FileReader.cpp src/KafkaConsumer.cpp src/buffer/BufferGenericQueue.cpp src/input/Consumer.cpp src/input/Producer.cpp)

include_directories(
        ${PROJECT_SOURCE_DIR}/generated
        ${PROJECT_SOURCE_DIR}/src
        /usr/local/include/antlr4-runtime
)

link_directories(
        /usr/local/lib
)

target_link_libraries(Stream_Processor   antlr4-runtime    )