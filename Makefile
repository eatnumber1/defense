RUBBER ?= rubber

RUBBEROPTS += --pdf --warn=all

JOBNAME ?= defense

.PHONY: all clean

all:
	$(RUBBER) $(RUBBEROPTS) $(JOBNAME)

clean:
	$(RUBBER) $(RUBBEROPTS) --clean $(JOBNAME)
