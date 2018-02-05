CHAPTERS:=$(wildcard chapter*)

.PHONY: all
all:
	for subdir in $(CHAPTERS); do make -C $${subdir}; done

test:
	@echo "test"
.PHONY:clean
clean:
	for subdir in $(CHAPTERS); do make -C $${subdir} clean; done
