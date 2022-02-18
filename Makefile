CXX = g++
CXXFLAGS = -std=c++2a -Wall -I h -I /usr/local/include/gtest/ -c
LXXFLAGS = -std=c++2a -Ih -pthread
OBJECTS = ./obj/linkedlist.o ./obj/main.o ./obj/dll_unittest.o
GTEST = /usr/local/lib/libgtest.a
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) -o $(TARGET) $(OBJECTS) $(GTEST)
./obj/linkedlist.o: ./cpp/linkedlist.cpp
	$(CXX) $(CXXFLAGS) ./cpp/linkedlist.cpp -o ./obj/linkedlist.o
./obj/dll_unittest.o: ./cpp/dll_unittest.cpp
	$(CXX) $(CXXFLAGS) ./cpp/dll_unittest.cpp -o ./obj/dll_unittest.o
./obj/main.o: ./cpp/main.cpp
	$(CXX) $(CXXFLAGS) ./cpp/main.cpp -o ./obj/main.o
clean:
	rm -fv $(TARGET) $(OBJECTS)
