CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
TARGET = function_overloading_demo
SRCDIR = Project1
OBJDIR = obj

SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/utils.cpp
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

$(shell mkdir -p $(OBJDIR))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean
