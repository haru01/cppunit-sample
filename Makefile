clean:
	rm -rf bin && mkdir bin

build:
	g++ src/** test/** -lcppunit -o bin/test;

runtest:
	bin/test

