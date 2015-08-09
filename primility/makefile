CPP = g++
CC = gcc 

CFLAGS= -pipe -fPIC 
CPPFLAGS=-Wall

ifeq ($(VER), debug)
CFLAGS+= -ggdb
else
CFLAGS+= -O3
endif

SRCDIR=.
SRC=$(wildcard ${SRCDIR}/*.cpp)
OBJ=$(SRC:.cpp=.o)

LIBFLAGS = -lm -lgmpxx -lgmp 
INCLUDE= -I.


primeTest: $(OBJ)
	$(CPP) $(CFLAGS) $(CPPFLAGS) $(LIBFLAGS) -o $@  $^

%.o: %.cpp
	@echo C++ -c -o $@ 
	@$(CPP) $(CFLAGS) $(CPPFLAGS) $(INCLUDE) -c -o $@ $<

.PHONY: clean
clean:
	@rm -f primeTest
	@rm -f $(OBJ:.o=.d)
	@rm -f $(OBJ)
	@echo Directory cleaned up. 

include $(SRC:.cpp=.d)
%.d: %.cpp
	@set -e; rm -f $@; \
	$(CPP) -MM $(CPPFLAGS) $(INCLUDE) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

