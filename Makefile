all:
	$(MAKE) -C veridriver
	$(MAKE) -C tests

clean:
	$(MAKE) -C veridriver clean
	$(MAKE) -C tests clean