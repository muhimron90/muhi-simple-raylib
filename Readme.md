## Project setup using raylib

> only tested on windows 10 64bit

#### Prerequisite

- install raylib via [VCPKG](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-cmd)

  > VCPKG root directory c:/dev/vcpkg
  > vcpkg --version
  > vcpkg add port raylib

- c/c++ compilers via [Mingw64](https://www.msys2.org/) or whatsoever

  > g++ --version

- cmake

  > cmake --version

- make

  > make --version

- (optional) clangd
  > language server and provide c++ features

#### Command

build

```sh
make build
```

run a program

```sh
make run
```

clean build

```sh
make clean
```

#### License

[MIT](https://github.com/muhimron90/muhi-raylib-starter/blob/main/LICENSE)
