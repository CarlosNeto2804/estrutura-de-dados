CPP = g++

CPPFLAGS = -W
CPPFLAGS += -I $(INCLUDES_DIR)

INCLUDES_DIR = $(CURDIR)/include
SRC_DIR = $(CURDIR)/src
BIN_DIR = $(CURDIR)/bin

EXEC = run.o

SRC = $(wildcard $(SRC_DIR)/*.cpp)

all: all-debug all-release

make-dirs:
	mkdir -p $(BIN_DIR)

all-release: make-dirs
	$(CPP) $(CPPFLAGS) -D NDEBUG $(SRC) -o $(BIN_DIR)/$(EXEC)

all-debug: make-dirs
	$(CPP) $(CPPFLAGS) $(SRC) -o $(BIN_DIR)/$(EXEC)

clean:
	@rm -f $(BIN_DIR)/$(EXEC)
