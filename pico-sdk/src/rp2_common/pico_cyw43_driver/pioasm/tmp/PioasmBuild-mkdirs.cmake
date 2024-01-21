# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/jchen/src/github.com/raspberrypi/pico-sdk/tools/pioasm"
  "/Users/jchen/workspace/car/pioasm"
  "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm"
  "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/tmp"
  "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
  "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src"
  "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/jchen/workspace/car/pico-sdk/src/rp2_common/pico_cyw43_driver/pioasm/src/PioasmBuild-stamp${cfgdir}") # cfgdir has leading slash
endif()
