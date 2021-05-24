main: queue prog
	gcc queue.o prog.o -o prog

queue:
	gcc -c queue.c

prog:
	gcc -c prog.c

debug: queueDebug progDebug
	gcc queue.o prog.o -g -o prog

queueDebug:
	gcc -g -c queue.c

progDebug:
	gcc -g -c prog.c


clean:
	rm queue.o
	rm prog.o

delete: clean
	rm prog