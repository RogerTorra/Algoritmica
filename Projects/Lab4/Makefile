
CXX=g++
CXXFLAGS=-Wall
TARGET=student
TGZ=$(TARGET).tgz
SRC=$(wildcard *.cc) $(wildcard *.hh) Makefile

.PHONY : all clean dist

all : $(TARGET)

student : main.cc student.cc student.hh

clean: 
	$(RM) $(TARGET) $(TGZ)

dist:
	@tar zcvf $(TGZ) $(SRC) fitxer.txt
