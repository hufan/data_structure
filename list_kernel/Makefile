all: kerlist
.PHONY :all

kerlist: list_ker.o
	gcc -o $@ $^
	
%.o : %.c
	gcc  -c -o $@ $<

clean:
	rm -f *.o  
	rm -f kerlist
