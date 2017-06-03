# Arduino-IRmodule

## Using VS1838B with Arduino

![Arduino connect 1838B](https://i.stack.imgur.com/L6f6j.gif)

## Build

```shell
# get source and initialize project
git clone https://github.com/dean-wong/Arduino-IRmodule.git ~/IRmodule
cd ~/IRmodule
# library IRremote's ID is 4
platformio lib install 4  
# building target
make
```

## Depend

[platformio](http://platformio.org/get-started)
