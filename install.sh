echo export USE_CCACHE=1 >> ~/.bashrc

prebuilts/misc/linux-x86/ccache/ccache -M 50G

source build/envsetup.sh

lunch

make -j8

emulator 