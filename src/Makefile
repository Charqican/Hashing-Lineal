CC = g++
TEST_DIR = ./test
CFLAGS = -c -Wall

main: file1.o file2.o file3.o
	@echo "running main..."
	$(CC) $(CFLAGS) $< -o $@
	./main

file1.o: file1.cpp
	@echo "Building file1.o"
	$(CC) $(CFLAGS) $< -o $@

file2.o: file2.cpp
	@echo "Building file2.o"
	$(CC) $(CFLAGS) $< -o $@

file3.o: file3.cpp
	@echo "Building file3.o"
	$(CC) $(CFLAGS) $< -o $@

$(TEST_DIR)/test.o: $(TEST_DIR)/test.cpp
	@echo "Building test.o"
	$(CC) $(CFLAGS) $< -o $@

test: file1.o file2.o file3.o $(TEST_DIR)/test.o
	@echo "testing..."
	$(CC) $(CFLAGS) $< -o $@
	./test

clean:
	del -f *.o main test *.exe