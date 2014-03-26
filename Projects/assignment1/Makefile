SHELL := /bin/bash
CXXFLAGS=-Wall -g 
PARAMS=100 200 300 400 500
NAME=smartdb
TARGETS=$(NAME)-recursiu $(NAME)-iteratiu
DATAS=$(foreach exec, $(TARGETS), $(exec).data )
PLOTS=$(foreach exec, $(TARGETS), $(exec).pdf )

all : $(TARGETS)

data : $(DATAS)

plot : $(PLOTS)

$(NAME)-recursiu : $(NAME)-recursiu.cc main.cc

$(NAME)-iteratiu : $(NAME)-iteratiu.cc main.cc

test : $(TARGETS)
	@export MAX_CUSTOMERS=50; for EXEC in $^; do \
	  for VALUE in $(PARAMS); do \
	    echo Testing $$EXEC with length=$$VALUE; \
	    ./register-creator.py $$VALUE temp.csv; ./smartdb.py temp.csv temp1.csv ; \
	    ./$$EXEC temp.csv temp2.csv; \
	  if cmp temp1.csv temp2.csv > /dev/null; then\
	    tput bold; echo OK; tput sgr0; else echo KO; fi \
	done; done

%.data : %
	@for p in $(PARAMS); do \
	echo -ne $$p"\t"; for x in `seq 10`; do \
	./register-creator.py $$p 2>&- | ./$< | grep calls | cut -d' ' -f2 ; \
	done | awk 'f += $$1 {printf("%.13g\n",f/NR)}' | tail -1; \
	done > $<.data \

$(PLOTS) : $(DATAS)
	@echo Creating plots
	@./create-plot.gnuplot

dist:
	tar zcvf $(NAME).tgz Makefile create-plot.gnuplot register-creator.py

clean:
	$(RM) $(NAME).tgz $(DATAS) $(PLOTS) $(TARGETS)
