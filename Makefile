mydaemond:mydaemon.c
	gcc -o $@ $^
.PHONY:clean
clean:
	rm -rf mydaemond
