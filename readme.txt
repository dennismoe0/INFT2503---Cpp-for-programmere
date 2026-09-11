For å teste compilation error:
g++ -Wall -Wextra -std=c++11 example.cpp -o fileNameOutput

zip:
tar -czvf COMPRESSED.tar.gz folderToCompress


cmake -S . -B build        # configure (once, or after editing CMakeLists.txt)
cmake --build build        # compile all targets
./build/oving2_1           # run one