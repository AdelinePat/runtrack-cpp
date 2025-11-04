## Setup

1. Create CMakeLists.txt

```bash
touch CMakeLists.txt
```

## Docker Setup and uses

1. Build and run the project in dev mode

```bash
docker compose up --build
```

This will pull & build images and create necessary network and volumes

2. Stop containers (if needed)

```bash
docker compose stop
```

The containers are set to restart automatically; stop them manually if not needed

3. Restart containers

```bash
docker compose start
```

## Start project
```bash
docker compose exec dev bash -c "cmake -S . -B build && cmake --build build && ./build/hello"
```
replace ./build/hello to the name of your executable (cf CMakeLists.txt last line add_executable)

```bash
docker compose exec dev bash -c "rm -rf build/*"
```

## Command to run inside container

1. Build with Ninja (if you installed it):

```bash
cmake -S . -B build        # configure build directory
cmake --build build       # compile the project
./build/hello             # run the resulting executable
```

2. Keep the container open after running a command:

```bash
make -C build
```

3. Clean ./build folder if needed

```bash
rm -rf build/*
```
