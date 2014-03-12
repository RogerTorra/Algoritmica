CXX=g++
CXXFLAGS=-Wall -DNDEBUG
TARGETS=search1 search2
TESTS=$(wildcard *.test)
DATAS=$(foreach exec, $(TARGETS), $(exec).data )
PLOTS=$(foreach exec, $(TARGETS), $(exec).pdf )
PARAMS=100 200 300 400 500
TGZFILE=searching.tgz

.PHONY : all clean data plot test dist tgz

all : $(TARGETS) 

data : $(DATAS)

plot : $(PLOTS)

search1 : search1.cc search.h main.cc
	$(CXX) $(CXXFLAGS) search1.cc main.cc -o $@

search2 : search2.cc search.h main.cc
	$(CXX) $(CXXFLAGS) search2.cc main.cc -o $@

test : $(TARGETS)
	@echo Testing
	@for EXEC in $(TARGETS); do ./make-integer-file.py temp.test ${PARAMS}; ./$$EXEC temp.test; done

%.data : %
	@echo Creating $< data files
	@./make-data.sh $< $(PARAMS)

$(PLOTS) : $(DATAS)
	@echo Creating plots
	@./create-plot.gnuplot

clean :
	@echo Removing files
	@$(RM) $(TARGETS) $(DATAS) $(PLOTS) *.o temp.test

tgz dist : 
	@echo Creating distribution
	@tar zcvf $(TGZFILE) search1.cc search2.cc search.h main.cc make-test.py Makefile create-plot.gnuplot make-data.sh make-integer-file.py
