# Bios Boot Tutorial

The `bios-boot-tutorial.py` script simulates the ARISENIO bios boot sequence.

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

1. Install arisenio binaries by following the steps outlined in below tutorial
[Install arisenio binaries](https://github.com/Arisenio/arisen#mac-os-x-brew-install)

2. Install arisenio.cdt binaries by following the steps outlined in below tutorial
[Install arisenio.cdt binaries](https://github.com/Arisenio/arisenio.cdt#binary-releases)

3. Compile arisenio.contracts

```bash
$ cd ~
$ git clone https://github.com/Arisenio/arisenio.contracts.git
$ cd ./arisenio.contracts/
$ ./build.sh
$ cd ./build/contracts/
$ pwd

```

4. Make note of the directory where the contracts were compiled
The last command in the previous step printed on the bash console the contracts' directory, make note of it, we'll reference it from now on as `ARISENIO_CONTRACTS_DIRECTORY`

5. Launch the `bios-boot-tutorial.py` script
Minimal command line to launch the script below, make sure you replace `ARISENIO_CONTRACTS_DIRECTORY` with actual directory

```bash
$ cd ~
$ git clone https://github.com/Arisenio/arisen.git
$ cd ./rsn/tutorials/bios-boot-tutorial/
$ python3 bios-boot-tutorial.py --arisecli="arisecli --wallet-url http://127.0.0.1:6666 " --aos=aos --awalletd=awalletd --contracts-dir="ARISENIO_CONTRACTS_DIRECTORY" -w -a
```

See [ARISENIO Documentation Wiki: Tutorial - Bios Boot](https://github.com/Arisenio/arisen/wiki/Tutorial-Bios-Boot-Sequence) for additional information.