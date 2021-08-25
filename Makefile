C = clang
CFLAGS=-I.
LDLIBS += -lcs50
vigenere: vigenere.o 
	$(C) -o vigenere vigenere.o $(LDLIBS)
