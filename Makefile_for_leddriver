
# CPPUTEST_HOME=$$HOME

CFLAGS  = -Wall

TARGET = LedDriver

OBJS = LedDriver.o LedDriverTest.o

# not install yet, use build one.
INCDIR = -I$(CPPUTEST_HOME)/include
LIBDIR = -L$(CPPUTEST_HOME)/lib

LIBS = -lm -lCppUTest -lCppUTestExt

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^ $(LIBDIR) $(LIBS)

LedDriver.o: LedDriver.c
	$(CC) -c LedDriver.c

LedDriverTest.o: LedDriverTest.cpp
	$(CXX) -c LedDriverTest.cpp $(INCDIR)

# .PHONY: all
all:
	make
	./$(TARGET) -c -v

# .PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS)

$(OBJS): LedDriver.h
