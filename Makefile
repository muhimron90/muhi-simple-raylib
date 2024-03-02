PROJECT_NAME=demo

build:
	cmake -B build -S .
	cmake --build build

run:
	./build/${PROJECT_NAME}
	
release:
	cmake -Bbuild -S . -DCMAKE_BUILD_TYPE=Release --fresh
	cmake --build build

clean:
	rm -rf ./build

.PHONY : build run clean

