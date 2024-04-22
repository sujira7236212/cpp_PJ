compile: main.cpp
	g++ main.cpp challenge/challenge.cpp challenge/disaster.cpp challenge/popQuiz.cpp -o CC

run: CC
	./CC

clean: CC
	rm CC