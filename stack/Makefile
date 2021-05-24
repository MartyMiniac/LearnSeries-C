main: compileProg compileStack
	gcc prog.o stack.o -o prog

compileStack:
	gcc -c stack.c

compileProg:
	gcc -c prog.c

debug: debugProg debugStack
	gcc prog.o stack.o -g -o prog

debugProg:
	gcc -g -c prog.c

debugStack:
	gcc -g -c stack.c

clean:
	rm stack.o
	rm prog.o

delete: clean
	rm prog