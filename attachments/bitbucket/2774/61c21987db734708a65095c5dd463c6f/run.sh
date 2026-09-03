# quit if something returns a non-zero code
set -e

# follow the instructions in the website to download the toolkit
# the version 2023-05 will be used instead of the 2023-11 because the CarpetX thorns fail to compile on my system
curl -kLO https://raw.githubusercontent.com/gridaphobe/CRL/ET_2023_05/GetComponents
chmod a+x GetComponents
./GetComponents --parallel https://bitbucket.org/einsteintoolkit/manifest/raw/ET_2023_05/einsteintoolkit.th

# cd into Cactus
cd Cactus

# make the configuration file using the default thornlist and the configuration for an arch-based system, which should be pre-existing in the parent directory
echo "making the configuration..."
yes | make base-config options=../arch.cfg THORNLIST=thornlists/einsteintoolkit.th &> make-config.out

# make the binary using all available hardware threads
echo "making the binary..."
make -j $(nproc) base &> make-binary.out
