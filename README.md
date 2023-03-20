f2c
===
Temperature units converter between Fahrenheit and Celsius.

Building
--------
Building is done using GNU Make.


```shell
$ make
$ make install 
$ make clean
```
Or
```shell
$ make install clean
```

For uninstalling:
```shell
$ make uninstall
```

By default the binary will be copied into `$HOME/.local/bin` directory with the name `f2c`. You can change it by altering the following make variables:

#### `PREFIX`
	- default: `$HOME/.local`
	Install location.

#### `CC`
	- default: `gcc`
	Compiler command.

#### `CC_FLAGS`
	- default: `-Wall -Werror`
	Compiler flags.

Usage
-------
```shell
$ f2c [-c|-f] DEGREE [DEGREE...]
```

```shell
$ f2c 72
  72.0°F          22.2°C
```

```shell
$ f2c -c 18 0 -f 32 -c -4 100
  18.0°C          64.4°F
   0.0°C          32.0°F
  32.0°F           0.0°C
  -4.0°C          24.8°F
 100.0°C         212.0°F
```
