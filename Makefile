all: initbal coin dollar wagecalculator

initbal:
	@echo Making initbal tool
	cd initbal_tool && $(MAKE) && mv initbal ../

coin:
	@echo Making coin tool
	cd coin_tool && $(MAKE) && mv coin ../

dollar:
	@echo Making dollar tool
	cd dollar_tool && $(MAKE) && mv dollar ../

wagecalculator:
	@echo Making wagecalculator tool
	cd wagecalculator_tool && $(MAKE) && mv wagecalculator ../

clean:
	rm initbal
	rm coin
	rm dollar
	rm wagecalculator

install: all
	mv initbal /usr/local/bin/initbal
	mv coin /usr/local/bin/coin
	mv dollar /usr/local/bin/dollar
	mv wagecalculator /usr/local/bin/wagecalculator

uninstall:
	rm /usr/local/bin/initbal
	rm /usr/local/bin/coin
	rm /usr/local/bin/dollar
	rm /usr/local/bin/wagecalculator

.PHONY: all initbal coin dollar wagecalculator clean install uninstall
