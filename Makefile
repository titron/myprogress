myprogress: main.c proc.c
	gcc main.c proc.c -o myprogress

.PHONY: clean
clean:
	rm -f myprogress
