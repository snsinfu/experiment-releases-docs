ROOT = ../include/range/all.hpp
HEADERS = $(shell find ../include/range -name "*.hpp")
TEMPLATE = template.hpp
VERSION ?= unreleased

.PHONY: clean

range.hpp: $(HEADERS) $(TEMPLATE)
	python3 bundle.py --template $(TEMPLATE) --version $(VERSION) $(ROOT) > $@

clean:
	rm -f range.hpp
