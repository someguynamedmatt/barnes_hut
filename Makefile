CXX=g++
RM=rm -f
BH=-o barnes_hut
SRCEXT=cpp
SOURCE=$(shell find src -type f -name "*.$(SRCEXT)")

barnes_hut:
	$(CXX) main.cpp $(SOURCE) $(BH)

clean:
	@echo "\n Cleaning...\n"
	$(shell $(RM) barnes_hut)
