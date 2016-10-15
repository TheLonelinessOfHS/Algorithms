CXX=g++
CXXFLAGS=-std=c++11 -Wall -Wfatal-errors

OBJECTS=optimized_bubble_sort.o


alg.out : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<


.PHONY : clean

clean : 
	rm *.o *.out
