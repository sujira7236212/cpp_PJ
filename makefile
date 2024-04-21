compile: main.cpp
	g++ main.cpp -o CC

run: CC
	./CC

clean: CC
	rm CC