cmake_minimum_required(VERSION 3.20)

project(lingmo-network VERSION 1.0.0 DESCRIPTION "Lingmo Network" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick)

add_library(lingmo-network SHARED
    src/main.cpp
)

target_link_libraries(lingmo-network PUBLIC
    Qt6::Core
    Qt6::Quick
)

include(GenerateExportHeader)
generate_export_header(lingmo-network
    EXPORT_MACRO_NAME LINGMO_LINGMO_NETWORK_EXPORT
    EXPORT_FILE_NAME /export.h
)

install(TARGETS lingmo-network
    EXPORT lingmo-networkTargets
    LIBRARY DESTINATION 
    ARCHIVE DESTINATION 
)

install(DIRECTORY include/lingmo-network
    DESTINATION 
)
