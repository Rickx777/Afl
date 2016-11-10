Sanders: Trump.c
	gcc Trump.c -o Sanders

run: Sanders
	./Sanders

clean:
	rm *~ *.txt
