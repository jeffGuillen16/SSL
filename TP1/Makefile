main: Conversion.o
	gcc ConversionMain.c Conversion.o -o ConversionMain
	./ConversionMain

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

conversionTest: Conversion.o
	gcc ConversionTest.c Conversion.o -o ConversionTest

test: conversionTest
	./ConversionTest