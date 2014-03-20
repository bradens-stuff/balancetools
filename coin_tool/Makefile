OPTS=-DBANK_C -DPOCKET_C -DROLLS_C -DINIT_C -DPADDING=\"2\"
FLAGS=-Wall -O2
TARGET=coin
FILES=main.c bank.c pocket.c rolls.c init.c

$(TARGET): $(FILES)
	gcc $^ $(FLAGS) -o $@ $(OPTS)

.PHONY: $(TARGET)
