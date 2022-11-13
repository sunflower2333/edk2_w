export PACKAGES_PATH=$PWD/../../../edk2:$PWD/../../../edk2-platforms:$PWD
export WORKSPACE=$PWD/workspace
. ../../../edk2/edksetup.sh
GCC5_AARCH64_PREFIX=aarch64-linux-gnu- build -s -n 0 -a AARCH64 -t GCC5 -b DEBUG -p RPi3/RPi3.dsc

