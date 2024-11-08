cmake_minimum_required(VERSION 3.5)

project(Gebaeudeverwaltung LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Gebaeudeverwaltung main.cpp
    Gebaeude.h Gebaeude.cpp
    Wohnung.h Wohnung.cpp
    Zimmer
    Zimmer.h Zimmer.cpp)

include(GNUInstallDirs)
install(TARGETS Gebaeudeverwaltung
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
