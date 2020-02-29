.PHONY: default
default: run

.PHONY: run
run: getmax
	./$^

getmax: % : %.c
	$(CC) $^ -o $@

.PHONY: clean
clean:
	$(RM) getmax
