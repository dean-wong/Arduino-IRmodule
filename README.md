# Arduino-IRmodule
## Using VS1838B with Arduino

![Arduino connect 1838B](https://i.stack.imgur.com/L6f6j.gif)

## Build
```shell
# get source and initialize project
git clone https://github.com/dean-wong/Arduino-IRmodule.git ~/IRmodule
cd ~/IRmodule && pio init -d . -b uno
# library IRremote's ID is 4
pio lib install 4  
# building target
pio run
```

## Depend
[pio](http://platformio.org/get-started)
