#MakeFile
DIR=./

listing_0801: listing_0801.o
	g++ -o listing_0801 listing_0801.o

listing_0801.o: listing_0801.cpp
	g++ -c listing_0801.cpp

listing_0802: listing_0802.o
	g++ -o listing_0802 listing_0802.o

listing_0802.o: listing_0802.cpp
	g++ -c listing_0802.cpp

listing_0803: listing_0803.o
	g++ -o listing_0803 listing_0803.o

listing_0803.o: listing_0803.cpp
	g++ -c listing_0803.cpp

.PHONY:clean
clean:	
#	rm *.o listing_0801
	rm $(DIR)*.o listing_0801 listing_0802 listing_0803
