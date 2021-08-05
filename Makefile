main: morseC_Main
	gcc morseC_Main.o morseAlph.h -o morseCode_us.out
debug: morseC_Main
	gcc -g morseC_Main.o morseAlph.h -o morseCode_us_d.out
morseC_Main: 
	gcc -c morsecode_us.c -o morseC_Main.o
clean:
	rm *.out *.o
