################################################################################
# Modified by Eugenio Pacceli in order to compile and link CUDA code with gcc's
# generated objects.
#
# You must have CUDA TOOLKIT 6, nvcc, gcc or g++ in order to run this Makefile.
# Tested on Debian testing/sid 64 bits, using the instructions in this article:
#
# http://prosciens.com/prosciens/how-to-install-nvidia-cuda-6-and-compile-all-the-samples-in-debian-testing-x86_64/
################################################################################
#
# Copyright 1993-2013 NVIDIA Corporation.  All rights reserved.
#
# NOTICE TO USER:
#
# This source code is subject to NVIDIA ownership rights under U.S. and
# international Copyright laws.
#
# NVIDIA MAKES NO REPRESENTATION ABOUT THE SUITABILITY OF THIS SOURCE
# CODE FOR ANY PURPOSE.  IT IS PROVIDED "AS IS" WITHOUT EXPRESS OR
# IMPLIED WARRANTY OF ANY KIND.  NVIDIA DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOURCE CODE, INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE.
# IN NO EVENT SHALL NVIDIA BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL,
# OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
# OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
# OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE
# OR PERFORMANCE OF THIS SOURCE CODE.
#
# U.S. Government End Users.  This source code is a "commercial item" as
# that term is defined at 48 C.F.R. 2.101 (OCT 1995), consisting  of
# "commercial computer software" and "commercial computer software
# documentation" as such terms are used in 48 C.F.R. 12.212 (SEPT 1995)
# and is provided to the U.S. Government only as a commercial end item.
# Consistent with 48 C.F.R.12.212 and 48 C.F.R. 227.7202-1 through
# 227.7202-4 (JUNE 1995), all U.S. Government End Users acquire the
# source code with only those rights set forth herein.
#
################################################################################
#
# Makefile project only supported on Mac OS X and Linux Platforms)
#
###############################################################################
OSUPPER = $(shell uname -s 2>/dev/null | tr "[:lower:]" "[:upper:]")
OSLOWER = $(shell uname -s 2>/dev/null | tr "[:upper:]" "[:lower:]")

# internal flags
CCFLAGS     :=
LDFLAGS     :=

# Extra user flags
EXTRA_LDFLAGS     ?=
EXTRA_CCFLAGS     ?=

GCCFLAGS = -g -Wall -Wfatal-errors 
ALL = identifier
GCC = gcc
CPPCHECK = cppcheck
CHECKFLAGS = --enable=all --suppress=missingIncludeSystem
VALGRIND = valgrind
VALGRINDFLAGS = --leak-check=full --show-leak-kinds=all
SANITIZEFLAGS = -g -Wall -Wfatal-errors -fsanitize=address


all: app

array.o:array.c
	gcc -o $@ -c $<

sort.o:sort.c
	gcc -o $@ -c $<

get_opt.o:get_opt.c
	gcc -o $@ -c $<

main.o:main.c
	gcc -o $@ -c $<

app: array.o sort.o get_opt.o main.o
	gcc $(ALL_LDFLAGS) -o $@ $+ $(LIBRARIES)

cov: main.c sort.c get_opt.c array.c
	$(GCC) $(GCCFLAGS) -fprofile-arcs -ftest-coverage -o $@ main.c sort.c get_opt.c array.c
	./cov -a quick -n 500 -s random

cppcheck: main.c sort.c get_opt.c array.c
	$(CPPCHECK) $(CHECKFLAGS) main.c sort.c get_opt.c array.c

valgrind: main.c sort.c get_opt.c array.c
	$(GCC) $(GCCFLAGS) main.c sort.c get_opt.c array.c -o valgrind
	$(VALGRIND) $(VALGRINDFLAGS) ./valgrind -a quick -n 500 -s almost
	
sanitize: main.c sort.c get_opt.c array.c
	$(GCC) $(SANITIZEFLAGS) main.c sort.c get_opt.c array.c -o sanitize
	./sanitize -a quick -n 500 -s almost

clean:
	rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov
	rm -f app	

test: all
	bash test
