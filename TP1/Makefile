main: Conversion.o
	gcc ConversionMain.c Conversion.o -o ConversionMain
	./ConversionMain

Conversion.o: Conversion.c
	rm -f ./Conversion.o
	gcc -c Conversion.c -o Conversion.o

conversionTest: Conversion.o
	rm -f ./ConversionTest
	gcc ConversionTest.c Conversion.o -o ConversionTest

test: conversionTest
	./ConversionTest