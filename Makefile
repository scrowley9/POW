CFILES=main.c asciiToInt.c

run:
	gcc $(CFILES) -o pow

clean:
	rm -rf pow
