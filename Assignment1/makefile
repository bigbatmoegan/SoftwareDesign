TestMe.exe: driver.o Array.o	
	g++ driver.o Array.o -o TestMe.exe

driver.o: driver.cpp	
	g++ -c driver.cpp -o driver.o

Array.o: Array.cpp	
	g++ -c Array.cpp -o Array.o

clean:	
	rm -f driver.o Array.o TestMe.exe

