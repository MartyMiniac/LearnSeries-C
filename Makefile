%:
	@echo "\033[0;33mbuilding $@.c"
	@gcc -o $@ $@.c
	@echo "building successful $@"
	@echo "running $@\n\033[1;37m"
	@./$@
	@echo "\n\n\033[0;33mProgram Ended"
	@rm -f $@

file:
	@bash create_boilerplate.sh