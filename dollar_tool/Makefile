OPTS=-DBANK_C -DWALLET_C -DINIT_C -DPADDING=\"5\"
FLAGS=-Wall -O2
TARGET=dollar
FILES=main.c bank.c wallet.c init.c

$(TARGET): $(FILES)
	gcc $^ $(FLAGS) -o $@ $(OPTS)

.PHONY: $(TARGET)
