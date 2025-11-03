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

## Command to run inside container
1. Build with Ninja (if you installed it):
```bash
cmake -S . -B build -G Ninja
cmake --build build
```
2. Keep the container open after running a command:
```bash
make -C build
```
3. Clean ./build folder if needed
```bash
rm -rf build/*
```

