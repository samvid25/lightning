# Instructions to Test the Routing Algorithm

## Instructions for Ubuntu:
```bash
sudo apt-get update
sudo apt-get install -y \
  autoconf automake build-essential git libtool libgmp-dev \
  libsqlite3-dev python python3 net-tools zlib1g-dev
git clone https://github.com/ElementsProject/lightning.git
cd lightning
./configure
make
```

The routing algorithm can be tested with any arbitrary topology and channel parameters.
```bash
cd gossip/test/
```
The `test_params` file contains the parameters to test the algorithm. Refer to `test_params_format` for the input format. Edit `test_params` as necessary, and then run: 
```
./run-custom_routing_test < test_params
```

Refer to the [detailed instructions](https://github.com/samvid25/lightning/blob/master/doc/INSTALL.md) to build c-lightning on other OSs.
