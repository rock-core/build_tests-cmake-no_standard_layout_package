rock_library(no_standard_layout_package
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(no_standard_layout_package_bin Main.cpp
    DEPS no_standard_layout_package)

