## Build Command:
```sh
g++ src/main.cpp src/game.cpp -o build/game.exe -I C:/raylib/include -L C:/raylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm
```

## Run Command:
```sh
./build/game.exe
```

**Remember to add ``src/${fileName}`` to build command as you add more headers.**