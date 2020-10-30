# Travis example for Identifier created by Rafael Garibotti

GCCFLAGS = -g -Wall -Wfatal-errors 
ALL = identifier
GCC = gcc
CPPCHECK = cppcheck
CHECKFLAGS = --enable=all --suppress=missingIncludeSystem
VALGRIND = valgrind
VALGRINDFLAGS = --leak-check=full --show-leak-kinds=all
SANITIZEFLAGS = -g -Wall -Wfatal-errors -fsanitize=address


all: $(ALL)

identifier: identifier.c
	$(GCC) $(GCCFLAGS) -o $@ $@.c

cov: identifier.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ identifier.c

cppcheck: identifier.c
	$(CPPCHECK) $(CHECKFLAGS) identifier.c

valgrind: identifier.c
	$(GCC) $(GCCFLAGS) identifier.c -o identifier
	$(VALGRIND) $(VALGRINDFLAGS) ./identifier
	
sanitize: identifier.c
	$(GCC) $(SANITIZEFLAGS) identifier.c -o identifier
	./identifier

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov 
	

test: all
	bash test
