TARGET = header_of_happiness
CC = mpicc
CPP = g++
LD  = g++

CPPFLAGS =  -O2
LDFLAGS  =  -O2
#LDFLAGS  =  -O2 -std=c++17 -ltinfo -lncurses

CPPOBJ = testutil.o

$(TARGET): $(COBJ) $(CPPOBJ)
	$(LD) $(LDFLAGS) $(COBJ) $(CPPOBJ) -o $(TARGET) 

$(COBJ) : %.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(CPPOBJ) : %.o : %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<

run:
	set -x
	./$(TARGET)
	set +x

#-------------------------------------*
.PHONY : clean clear
clean:
	-rm -rf $(TARGET) $(COBJ) $(CPPOBJ)
