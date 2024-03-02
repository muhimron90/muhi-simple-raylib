PROJECT_NAME=muhi-raylib

.PHONY : default build run clean
default:
	cmake --preset=default

build: default
	cmake --build --preset=default

run:
	./build/${PROJECT_NAME}

#test:
#	ctest --preset default

clean:
	rm -rf build .cache
