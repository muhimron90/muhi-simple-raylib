## Project setup using raylib

> only tested on windows 10 64bit

#### Prerequisite

- install raylib via [VCPKG](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-cmd)

  - VCPKG root directory _c:/dev/vcpkg_
    > _vcpkg --version_

- c/c++ compilers via [Mingw64](https://www.msys2.org/) or whatsoever

  > _g++ --version_

- cmake

  > _cmake --version_

- make

  > _make --version_

- Ninja

- (optional) clangd
  > language server and provide c++ features

_PS: cmake make Ninja can be installed with Mingw64_

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

[MIT](https://github.com/muhimron90/muhi-simple-raylib/blob/main/LICENSE)
