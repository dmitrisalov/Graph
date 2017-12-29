EXENAME = test
OBJS = test.o Graph.o Edge.o

CXX = clang++
CXXFLAGS = -std=c++14

$(EXENAME): $(OBJS)
	$(CXX) $^ $(CXXFLAGS) -o $(EXENAME)

test.o: test.cpp
	$(CXX) $< $(CXXFLAGS) -c test.cpp

Graph.o: Graph.cpp Graph.h
	$(CXX) $< $(CXXFLAGS) -c Graph.cpp

Edge.o: Edge.cpp Edge.h
	$(CXX) $< $(CXXFLAGS) -c Edge.cpp

clean:
	rm *.o $(EXENAME)