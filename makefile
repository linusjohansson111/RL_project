CXX = g++
CXXFLAGS = -std=c++11
SFML_LIBS = -lsfml-graphics -lsfml-window -lsfml-system

SRC_DIR = .
SRC_FILES = main.cpp \
			Game/Game.cpp \
			Game/Wilderness/Wilderness.cpp \
			Game/Wilderness/Map/Map.cpp \
			Game/Wilderness/Object/Object.cpp \
			Game/Wilderness/Object/Entity/Entity.cpp \
			Game/Wilderness/Object/Entity/Player/Player.cpp
OUT = RL_project

all: $(OUT)

$(OUT): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC_FILES) $(SFML_LIBS)

clean:
	rm -f $(OUT)

.PHONY: all clean