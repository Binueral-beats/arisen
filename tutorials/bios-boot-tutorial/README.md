# Bios Boot Tutorial

The `bios-boot-tutorial.py` script simulates the ARISEN bios boot sequence.

``Prerequisites``:

1. Python 3.x
2. CMake
3. git
4. g++
5. build-essentials
6. pip3
7. openssl
8. curl
9. jq
10. psmisc


``Steps``:

1. Install arisen binaries by following the steps outlined in below tutorial
[Install arisen binaries](https://github.com/ARISEN/rsn#mac-os-x-brew-install)

2. Install arisen.cdt binaries by following the steps outlined in below tutorial
[Install arisen.cdt binaries](https://github.com/ARISEN/arisen.cdt#binary-releases)

3. Compile arisen.contracts

```bash
$ cd ~
$ git clone https://github.com/ARISEN/arisen.contracts.git
$ cd ./arisen.contracts/
$ ./build.sh
$ cd ./build/contracts/
$ pwd

```

4. Make note of the directory where the contracts were compiled
The last command in the previous step printed on the bash console the contracts' directory, make note of it, we'll reference it from now on as `ARISEN_CONTRACTS_DIRECTORY`

5. Launch the `bios-boot-tutorial.py` script
Minimal command line to launch the script below, make sure you replace `ARISEN_CONTRACTS_DIRECTORY` with actual directory

```bash
$ cd ~
$ git clone https://github.com/ARISEN/rsn.git
$ cd ./rsn/tutorials/bios-boot-tutorial/
$ python3 bios-boot-tutorial.py --arisecli="arisecli --wallet-url http://127.0.0.1:6666 " --aos=aos --awalletd=awalletd --contracts-dir="ARISEN_CONTRACTS_DIRECTORY" -w -a
```

See [ARISEN Documentation Wiki: Tutorial - Bios Boot](https://github.com/ARISEN/rsn/wiki/Tutorial-Bios-Boot-Sequence) for additional information.