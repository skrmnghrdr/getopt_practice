mkdir build
touch build/build.sh
sudo apt-get update 
sudo apt-get install cmake -y

echo "cmake --build . --target clean && cmake --build ." > build/build.sh
cd build/
cmake ..
bash build.sh
