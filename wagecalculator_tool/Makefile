OPTS=-DDEFAULT_WAGE=7.5 -DINCOME_TAX=13.1
FLAGS=-Wall -O2
TARGET=wagecalculator
FILES=main.c wage.c time.c tax.c

$(TARGET): $(FILES)
	gcc $^ $(FLAGS) -o $@ $(OPTS)

.PHONY: $(TARGET)
