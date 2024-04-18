compile: main.cpp
	g++ main.cpp BST.cpp menu.cpp first.cpp testtree.cpp -o CC

run: CC
	./CC

clean: CC
	rm CC