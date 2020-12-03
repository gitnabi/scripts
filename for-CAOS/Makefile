CFLAGS=-Wall -Werror -O2
main: main.c
	@(gcc $^ -o $@ $(CFLAGS))


CPPFLAGS=-O2
readingassistant: readingassistant.cpp
	@(g++ $^ -o $@ $(CPPFLAGS))


clean:
	rm main readingassistant
