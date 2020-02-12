
# ARISEN - The Most Powerful Infrastructure for Decentralized Applications

[![Build status](https://badge.buildkite.com/370fe5c79410f7d695e4e34c500b4e86e3ac021c6b1f739e20.svg?branch=master)](https://buildkite.com/ARISEN/arisen)

Welcome to the ARISEN source code repository! This software enables businesses to rapidly build and deploy high-performance and high-security blockchain-based applications.

Some of the groundbreaking features of ARISEN include:

1. Free Rate Limited Transactions
1. Low Latency Block confirmation (0.5 seconds)
1. Low-overhead Byzantine Fault Tolerant Finality
1. Designed for optional high-overhead, low-latency BFT finality
1. Smart contract platform powered by WebAssembly
1. Designed for Sparse Header Light Client Validation
1. Scheduled Recurring Transactions
1. Time Delay Security
1. Hierarchical Role Based Permissions
1. Support for Biometric Hardware Secured Keys (e.g. Apple Secure Enclave)
1. Designed for Parallel Execution of Context Free Validation Logic
1. Designed for Inter Blockchain Communication

ARISEN is released under the open source MIT license and is offered “AS IS” without warranty of any kind, express or implied. Any security provided by the ARISEN software depends in part on how it is used, configured, and deployed. ARISEN is built upon many third-party libraries such as WABT (Apache License) and WAVM (BSD 3-clause) which are also provided “AS IS” without warranty of any kind. Without limiting the generality of the foregoing, Block.one makes no representation or guarantee that ARISEN or any third-party libraries will perform as intended or will be free of errors, bugs or faulty code. Both may fail in large or small ways that could completely or partially limit functionality or compromise computer systems. If you use or implement ARISEN, you do so at your own risk. In no event will Block.one be liable to any party for any damages whatsoever, even if it had been advised of the possibility of damage.  

Block.one is neither launching nor operating any initial public blockchains based upon the ARISEN software. This release refers only to version 1.0 of our open source software. We caution those who wish to use blockchains built on ARISEN to carefully vet the companies and organizations launching blockchains based on ARISEN before disclosing any private keys to their derivative software.

There is no public testnet running currently.

---

**If you used our build scripts to install arisen, [please be sure to uninstall](#build-script-uninstall) before using our packages.**

---

#### Mac OS X Brew Install
```sh
$ brew tap arisen/arisen
$ brew install arisen
```
#### Mac OS X Brew Uninstall
```sh
$ brew remove arisen
```

#### Ubuntu 18.04 Package Install
```sh
$ wget https://github.com/arisen/rsn/releases/download/v1.8.10/eosio_1.8.10-1-ubuntu-18.04_amd64.deb
$ sudo apt install ./eosio_1.8.10-1-ubuntu-18.04_amd64.deb
```
#### Ubuntu 16.04 Package Install
```sh
$ wget https://github.com/arisen/rsn/releases/download/v1.8.10/eosio_1.8.10-1-ubuntu-16.04_amd64.deb
$ sudo apt install ./eosio_1.8.10-1-ubuntu-16.04_amd64.deb
```
#### Ubuntu Package Uninstall
```sh
$ sudo apt remove arisen
```
#### Centos RPM Package Install
```sh
$ wget https://github.com/arisen/rsn/releases/download/v1.8.10/arisen-1.8.10-1.el7.x86_64.rpm
$ sudo yum install ./arisen-1.8.10-1.el7.x86_64.rpm
```
#### Centos RPM Package Uninstall
```sh
$ sudo yum remove arisen
```

#### Build Script Uninstall

If you have previously installed ARISEN using build scripts, you can execute `eosio_uninstall.sh` to uninstall.
- Passing `-y` will answer yes to all prompts (does not remove data directories)
- Passing `-f` will remove data directories (be very careful with this)
- Passing in `-i` allows you to specify where your arisen installation is located

## Supported Operating Systems
ARISEN currently supports the following operating systems:  
1. Amazon Linux 2
2. CentOS 7
3. Ubuntu 16.04
4. Ubuntu 18.04
5. MacOS 10.14 (Mojave)

## Resources
1. [Website](https://rsn.io)
1. [Blog](https://medium.com/arisen)
1. [Developer Portal](https://developers.rsn.io)
1. [StackExchange for Q&A](https://arisen.stackexchange.com/)
1. [Community Telegram Group](https://t.me/EOSProject)
1. [Developer Telegram Group](https://t.me/joinchat/EaEnSUPktgfoI-XPfMYtcQ)
1. [White Paper](https://github.com/ARISEN/Documentation/blob/master/TechnicalWhitePaper.md)
1. [Roadmap](https://github.com/ARISEN/Documentation/blob/master/Roadmap.md)

<a name="gettingstarted"></a>
## Getting Started
Instructions detailing the process of getting the software, building it, running a simple test network that produces blocks, account creation and uploading a sample contract to the blockchain can be found in [Getting Started](https://developers.rsn.io/arisen-home/docs) on the [ARISEN Developer Portal](https://developers.rsn.io).

## Contributing

[Contributing Guide](./CONTRIBUTING.md)

[Code of Conduct](./CONTRIBUTING.md#conduct)

## License

[MIT](./LICENSE)

## Important

See [LICENSE](./LICENSE) for copyright and license terms.

All repositories and other materials are provided subject to the terms of this [IMPORTANT](./IMPORTANT.md) notice and you must familiarize yourself with its terms.  The notice contains important information, limitations and restrictions relating to our software, publications, trademarks, third-party resources, and forward-looking statements.  By accessing any of our repositories and other materials, you accept and agree to the terms of the notice.
