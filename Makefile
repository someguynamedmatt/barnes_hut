CXX=g++
RM=rm -f
BH=-o barnes_hut

barnes_hut:
	$(CXX) main.cpp $(BH)

clean:
	$(RM) $(barnes_hut)
