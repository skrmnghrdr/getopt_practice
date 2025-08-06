# Simple Option Handler in C
A simple implementation of `getopt_long()` function in C.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
 - [Contact](#contact)
 
## Installation
**dependencies:** Cmake, gcc, make

Clone the repo: 
```bash
git clone https://github.com/skrmnghrdr/getopt_practice.git
sudo bash install.sh
cd build
./optionhandler

```

## Usage
`./optionhandler <switch/es>`

The script is capable of accepting long switches `--verbose` or short version `-v`
allowed options are:

```
Options:
        -h, --help                       Show this help message and exit
        -o, --output                     File path for the output file
        -v, --verbose                    Verbose mode on. (Start yapping)
        -d, --debug                      Debug mode on
        -t, --testmode                   Experimental function
```

example:
`./optionhandler --verbose --debug`


## Features
- Quick and empty template for your future `getopt_long()` implementation
- Built in function to print the stuct options 
- Easy installation script

## Contact
 - Email: notaprotonmailemail@protonmail.com
 - Ouija board: 
